#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#define SERVER_PORT 9090
#define SERVER_IP "127.0.0.1"
#define LISTEN_QUEUE 5
#define BUFFER_SIZE 255

int main()
{
	int sockCli = socket(AF_INET, SOCK_DGRAM, 0);
	if(sockCli == -1){
		perror("socket");
		return -1;
	}

	struct sockaddr_in addrSer;
	addrSer.sin_family = AF_INET;
	addrSer.sin_port = htons(SERVER_PORT);
	addrSer.sin_addr.s_addr = inet_addr(SERVER_IP);

	char sendbuf[BUFFER_SIZE];
	char recvbuf[BUFFER_SIZE];
	socklen_t len = sizeof(struct sockaddr);
	while(1){
		printf("Cli:>");
		scanf("%s",sendbuf);
		if(strncmp(sendbuf, "quit", 4) == 0){
			break;
		}
		sendto(sockCli, sendbuf, strlen(sendbuf)+1, 0, (struct sockaddr*)&addrSer, len);

		recvfrom(sockCli, recvbuf, BUFFER_SIZE, 0, (struct sockaddr*)&addrSer, &len);
		printf("Ser:>%s\n",recvbuf);
	}
	close(sockCli);
	return 0;
}
