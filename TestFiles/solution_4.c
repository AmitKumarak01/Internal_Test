#include <stdio.h>  
  
int main ()  
{   
    int arr[1000];  
    int position;
    int i,n; 
    printf (" \n Enter the Total number of elements in an array: \n ");  
    scanf (" %d", &n);  
      
    printf("Array elements are :"); 
       
    for (i = 0; i < n; i++ )  
    {     
    	scanf (" %d", &arr[i]);  
    }  
       
    printf( " Postion of that point from where element is delted  \n ");  
    scanf (" %d", &position);  
        
    if (position >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array beacuse it does not found the index of that element ");  
    }  
    else  
    {   
        for (i = position - 1; i < n -1; i++)  
        {  
            arr[i] = arr[i+1]; 
        }  
          
        printf (" \n Arra after the deleted element is :  \n");  
          
        for (i = 0; i< n - 1; i++)  
        {  
            printf (" %d \n", arr[i]);  
        }  
    }  
    return 0;  
}  			
