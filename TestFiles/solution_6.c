#include<stdio.h>
#include<stdlib.h>

int main()
{
	double *arr;
	int n;
	printf("Enter Total number of elements in an array : ");
	scanf("%d", &n);

	arr = calloc(n,sizeof(double));
	
	if(arr == NULL)
	{
		printf("There is no element in an array : ui.e arrray is empty ");
		return 0;
	}

	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf",arr+i);
	}

	for(i=1;i<n;i++)
	{
		if(*arr < *(arr+i))
		{
			*arr = *(arr+i);
		}
	}

	printf("Laregest number among all elements in array is : %lf",*arr);

	free(arr);


	return 0;

}
