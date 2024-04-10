#include<stdio.h>
int main(int argc, char const *argv[])
{
    int largest=0;
    int smallest=0;
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
    smallest=arr[0];

    for (int i = 1; i < 10; i++)
    {
        if(arr[i]>largest)  largest = arr[i];
        if(arr[i]<smallest) smallest=arr[i];

    }

    printf("\nlargest:%d",largest);
    printf("\n smallest:%d",smallest);
    
    
    
    return 0;
}
