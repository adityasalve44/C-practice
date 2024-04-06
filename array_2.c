#include<stdio.h>
int main()
{
    int a[50];
    for (int i = 0,j=1; i < 50; i++)
    {
       a[i]=j;
       j++;
    }
    for (int k = 0;k<50; k++)
    {
        if (a[k]%2==0)
        printf("\t  %d",a[k]);
    }
    
    return 0;
}