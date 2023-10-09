#include<stdio.h>
#include "solution_8_file.h"

int Multiply(int a,int b)
{
	return a*b;
}

int Division(int a,int b)
{
	if(b!=0)
	{
		return a/b;
	}
	else
	{
		printf("Number is not divisible by zero ");
	}
}
