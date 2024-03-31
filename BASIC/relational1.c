#include<stdio.h>
int a,b;
    int c;
void main()
{
   
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    c=a==b;
    printf("\na is equal to b:%d",c);
    c=a!=b;
    printf("\na is not equal to b:%d",c);
    c=a<b;
    printf("\na is less than b:%d",c); 
    c=a>b;
    printf("\na is greater than b:%d",c);
    c=a<=b;
    printf("\na is less than or equal to b:%d",c);
    c=a>=b;
    printf("\na is greater than or equal to b:%d",c);
}