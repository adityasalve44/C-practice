#include<stdio.h>
int p,q,r,s;
void main()
{
    printf("enter the four values:");
    scanf("%d%d%d%d",&p,&q,&r,&s);
   int a=p+q;
   int b=r+s;
    printf("\na is equal to b:%d",a==b);
    printf("\na is  not equal to b:%d",a!=b);
    printf("\na is greater than b:%d",a>b);
    printf("\na is less than or equalb:%d",a<=b);
    printf("\na isgreater than or equal to b:%d",a>=b);

}