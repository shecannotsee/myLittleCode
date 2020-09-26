#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define logprintf printf

int main(int argc,char** argv){
    /*Initializing server socket*/
    int server_sock=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

    if(server_sock!=-1){
        logprintf("serverfd is %d.\n",server_sock);
	
	struct sockaddr_in server_addr;
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family=AF_INET;//IPv4
	server_addr.sin_addr.s_addr=inet_addr("192.168.17.129");//ip
	server_addr.sin_port=htons(1234);//port
	
	/*bing ip and port*/
	if(bind(server_sock,(struct sockaddr*) &server_addr,sizeof(server_addr))==0){
	    logprintf("bind success.\n");

	    /*start listen*/
	    if(listen(server_sock,1024)==0){
		/*client socket initialization*/
		struct sockaddr_in client_addr;
		socklen_t client_addr_size = sizeof(client_addr);
	            /*Initializing client socket*/
		    int client_sock=accept(server_sock, (struct sockaddr*) &client_addr, &client_addr_size);
		    if(client_sock!=-1){
		        logprintf("client connect success!clientfd is %d.\n",client_sock);
		        /*receiving process*/
			char str[256];
			read(client_sock, str, sizeof(str));
		        printf("client send: %s\n",str);
		        strcat(str, "+ACK");
		        write(client_sock, str, sizeof(str));
		    }else{
		        logprintf("client socket create failed.\n");
		    }
		close(client_sock);

	    }else{
	        logprintf("listen filed.\n");
	    }

	}else{
	    logprintf("bind failed.\n");
	}

    }else{
    	logprintf("server socket create failed\n");
    }
    
    close(server_sock);

    return 0;
}

