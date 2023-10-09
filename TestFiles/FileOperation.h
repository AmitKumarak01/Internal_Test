#include<stdio.h>

FILE *ClientMessageFile;
FILE *ServerMessageFile;

void Openingfiles()
{
	ClientMessageFile = fopen("ClientMessage.txt","a");
	ServerMessageFile = fopen("ServerMessage.txt","a");
}

void closefiles()
{
	fclose(ClientMessageFile);
	fclose(ServerMessageFile);
}
