#include<stdio.h>
int main()
{
    int a[10];
    int len = sizeof(a) / sizeof(int);//to find out length of an array if not given


    printf("enter a values of a[]");
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("\t %d",a[i]);
    }
    return 0;
}