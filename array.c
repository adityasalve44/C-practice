#include<stdio.h>
int main()
{
    int a[10];
    printf("enter a values of a[]");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        
    }
    for (int i = 0; i < 10; i++)
    {
        
        printf("\t %d",a[i]);
    }


    return 0;
}
