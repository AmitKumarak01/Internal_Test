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
	int ClientSocket, ServerSocket;
	struct sockaddr_in serveraddr,clientaddr;
	socklen_t addrsize;
	char buffer[BUFFER];

	Openingfiles();

	ServerSocket = socket(AF_INET,SOCK_STREAM,0);
	if(ServerSocket ==-1)
	{
		printf("Socket does not be created ...\n");
		exit (0);
	}

	serveraddr.sin_family = AF_INET;
	serveraddr.sin_port = htons(PORT);
	serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	bind(ServerSocket,(struct sockaddr*)&serveraddr,sizeof(serveraddr));
	printf("Bind to the port number successfully ...\n");

	listen(ServerSocket,7);
	printf("Listening successfully");


	while(1)
	{
		addrsize = sizeof(clientaddr);
		ClientSocket = accept(ServerSocket,(struct sockaddr*)&clientaddr,&addrsize);

		memset(buffer,0,BUFFER);
		recv(ClientSocket,buffer,sizeof(buffer),0);

		fprintf(ClientMessageFile, "Client : %s\n",buffer);

		fgets(buffer,sizeof(buffer),stdin);

		send(ClientSocket,buffer,sizeof(buffer),0);

		close(ClientSocket);
	}
	close(ServerSocket);

	closefiles();

	return 0;
}

		




