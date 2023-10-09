#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>


#include "FileOperation.h"

#define PORT 5555
#define BUFFER 512

int main()
{
	int ClientSocket;
	struct sockaddr_in serveraddr;
	char buffer[BUFFER];

	Openingfiles();

	ClientSocket = socket(AF_INET,SOCK_STREAM,0);
	if(ClientSocket ==-1)
	{
		printf("Socket does not be created ...\n");
		exit (0);
	}

	serveraddr.sin_family = AF_INET;
	serveraddr.sin_port = htons(PORT);
	serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	connect(ClientSocket,(struct sockaddr*)&serveraddr,sizeof(serveraddr));

	printf("Clinet connected to the server");

	fgets(buffer,sizeof(buffer),stdin);

	send(ClientSocket,buffer,sizeof(buffer),0);

	fprintf(ServerMessageFile,"Client : %s\n",buffer);
	
	
	close(ClientSocket);
	closefiles();
	return 0;
}
