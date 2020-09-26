#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

#define logprintf printf

int main(){
	/*Initializing client socket*/
	int client_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(client_sock!=-1){
	    /*Initializing server'ip and port */
	    struct sockaddr_in serv_addr;
	    memset(&serv_addr, 0, sizeof(serv_addr));
	    serv_addr.sin_family = AF_INET;
	    serv_addr.sin_addr.s_addr = inet_addr("192.168.17.129");
	    serv_addr.sin_port = htons(1234);
	
	    /*Link to request*/
	    if(connect(client_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr))==0){
	        /*sending process*/
		char buffer[40];
		printf("Please write:");
		scanf("%s", buffer);
		write(client_sock, buffer, sizeof(buffer));
		read(client_sock, buffer, sizeof(buffer) - 1);
		printf("Serve send: %s\n", buffer);
	    }else{
	        logprintf("connect failed.\n");
	    }

	}else{
	    logprintf("client socket create failed.\n");
	}

	close(client_sock);

	return 0;
}
