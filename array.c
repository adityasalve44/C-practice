#include<stdio.h>
int main()
{
    int a[10];
    int len = sizeof(a) / sizeof(int);

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

// operator
//elements
//data_type-- 
//length = 100
//time and space complexity

//          sizeof(arr) / sizeof(int)= 10

