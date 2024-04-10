#include<stdio.h>
int a,b;
int swap();
int main()
{
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("A=%d and B=%d\n",a,b);
    swap();//function call
    return 0;
}
int swap()
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("A=%d and B=%d",a,b);
}