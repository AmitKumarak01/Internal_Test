#include<stdio.h>
#include "solution_8_file.h"
//#include "lib_dynamic.so"
//#include "library_MulDiv.a"
#include "solution_8_add.c"
#include "solution_8_sub.c"
#include "solution_8_muldiv.c"
#include<stdlib.h>

int main()
{
	int choice,a,b;

	int result;
	//printf("Enter the number by the user : ");
	//scanf("%d %d ",&a,&b);

	//printf("Enter the choice by the user : \n");
	scanf("%d",&choice);


	while(choice!=5)
	{
		printf("\nEnter choice by the user\n");
		printf("1 -- For Addition--\n");
		printf("2 -- For Subtraction--\n");
		printf("3 -- For Multiply--\n");
		printf("4 -- For Division--\n");
		printf("5 -- exit the program--\n");

		printf("Enter choice by the user : \n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Enter the number by the user : \n");		
			scanf("%d %d ",&a,&b);
			result = Addition(a,b);
			printf("Addition of two number is : %d",result);
			break;

		case 2:
			printf("Enter the number by the user : \n");
			scanf("%d %d ",&a,&b);
			result = Subtraction(a,b);
			printf("Subtraction of two number is : %d",result);
			break;

		case 3:
			printf("Enter the number by the user : \n");
			scanf("%d %d",&a,&b);
			result = Multiply(a,b);
			printf("Multiplication of two number is : %d \n",result);
			break; 

		case 4:
			printf("Enter the number by the user : \n");
			scanf("%d %d",&a,&b);
			result = Division(a,b);
			printf("Division for two number is : %d \n",result);
			break;

		case 5:
			printf("Invalid input b the user \n");
			exit(0);
			break;

		default:
			break;
		}
	}		
			
	return 0;
}
