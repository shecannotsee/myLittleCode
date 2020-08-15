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
	int sockSer = socket(AF_INET, SOCK_DGRAM, 0);
	if(sockSer == -1){
		perror("socket");
		return -1;
	}
	struct sockaddr_in addrSer, addrCli;
	addrSer.sin_family = AF_INET;
	addrSer.sin_port = htons(SERVER_PORT);
	addrSer.sin_addr.s_addr = inet_addr(SERVER_IP);

	socklen_t len = sizeof(struct sockaddr);
	int res = bind(sockSer, (struct sockaddr*)&addrSer, len);
	if(res == -1){
		perror("bind");
		close(sockSer);
		return -1;
	}

	char sendbuf[BUFFER_SIZE];
	char recvbuf[BUFFER_SIZE];
	while(1){
		recvfrom(sockSer, recvbuf, BUFFER_SIZE, 0, (struct sockaddr*)&addrCli, &len);
		printf("Cli:>%s\n",recvbuf);

		printf("Ser:>");
		scanf("%s",sendbuf);
		if(strncmp(sendbuf, "quit", 4) == 0){
			break;
		}
		sendto(sockSer, sendbuf, strlen(sendbuf)+1, 0, (struct sockaddr*)&addrCli, len);
	}
	close(sockSer);
	return 0;
}
