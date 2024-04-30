#include<stdio.h>
int main()
{
    int largest=0;
    
    int arr[10];

    printf("\nEnter values of array:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\t%d",arr[i]);
    }

    largest=arr[0];
  

    for (int i = 1; i < 10; i++)
    {
        if(arr[i]>largest)  largest = arr[i];
        

    }

    printf("\nlargest:%d",largest);
    
    
    
    
    return 0;
}
