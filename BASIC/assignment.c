#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    a+=b;   //a=a+b
    printf("\nAddition:%d",a);
    a-=b;    //a=a-b
    printf("\nSubtraction:%d",a);
    a*=b;    //a=a*b
    printf("\nMultiplication:%d",a);
    a/=b;    //a=a/b
    printf("\nDivision:%d",a);
    a%=b;
    printf("\nmodulus:%d",a);
    a=10;
    a&=b;
    printf("\nAND:%d",a);
    a=10;
    a|=b;
    printf("\nOR:%d",a);
    a=10;
    a^=b;
    printf("\nXOR:%d",a);
    a=10;
    a<<=b;
    printf("\nLeft Shift:%d",a);
    a=10;
    a>>=b;
    printf("\nRight Shift:%d",a);

    }