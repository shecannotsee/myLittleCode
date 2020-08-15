#include "unp.h"

int main(int argc, char **argv){
    int                     listenfd, connfd;
    pid_t               childpid;
    socklen_t       clilen;
    struct sockaddr_in cliaddr,servaddr;
    listenfd=Socket(AF_INET,SOCK_STREAM,0);//A:create TCP
    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family=AF_INET;
    servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
    servaddr.sin_port=htons(SERV_PORT);
    Bind(listenfd,(SA*)&servaddr,sizeof(servaddr));
    Listen(listenfd,LISTENQ);//end-A
    for(;;){
        clilen=sizeof(cliaddr);//B:wait client to accept
        connfd=Accept(listenfd,(SA*)&cliaddr,&clilen);//end-B
        if((childpid=Fork())==0){//C:concurrence server
            Close(listenfd);
            str_echo(connfd);
            exit(0);  
        }
        Close(connfd);//end-C
    }
}