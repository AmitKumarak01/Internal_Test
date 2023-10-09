#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

#define BUFFER 16
#define MAX_SIZE 1001


sem_t starting,ending;
pthread_t sender;
pthread_t receiver;

int buffer[BUFFER];

void *SenderFunction()
{
	int number = 0;
	while(number<MAX_SIZE)
	{
		sem_wait(&starting);
		buffer[number % BUFFER] = number;
		printf("Sender Process %d\n",number);
		sem_post(&ending);
		number++;
	}
}


void *ReceiverFunction()
{
	int number = 0;
	while(number<MAX_SIZE)
	{
		sem_wait(&ending);
		buffer[number % BUFFER] = number;
		printf("Recieved from the sender %d\n",number);
		sem_post(&starting);
		number++;
	}
}




int main()
{
	sem_init(&starting,0,BUFFER);
	sem_init(&ending,0,0);

	pthread_create(&sender,NULL,&SenderFunction,NULL);
	pthread_create(&receiver,NULL,&ReceiverFunction,NULL);

	pthread_join(sender,NULL);
	pthread_join(receiver,NULL);

	sem_destroy(&starting);
	sem_destroy(&ending);

	return 0;
}




