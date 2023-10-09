#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char string[1000];
	printf("Enter the string by the user : ");

	gets(string);
	//printf("\n %s",string);


	int Lower_character_count = 0;
	int Upper_character_count= 0;
	int Special_character_count = 0;
	int Digits_count = 0;


	int i;

	while(string[i]!='\0')
	{
		if(string[i]>='A' && string[i]<='Z')
		{
			Upper_character_count++;
		}
		else if(string[i]>='a' && string[i]<='z')
		{
			Lower_character_count++;
		}
		else if(string[i]>='1' && string[i]<='9')
		{
			Digits_count++;
		}
		else
		{
			Special_character_count++;
		}

		i++;
	
	}

	printf("\nTotal number of upper charcter are : %d ",Upper_character_count);
	printf("\nTotal number of lower charcter are : %d ",Lower_character_count);
	printf("\nTotal number of Digits are : %d ",Digits_count);
	printf("\nTotal number of special  charcter are : %d ",Special_character_count);

	return 0 ;

}

