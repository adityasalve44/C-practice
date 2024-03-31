#include<stdio.h>
int main()
{
    int a;
    int b;
    int add,sub,mul,mod;
    float div;
    printf("\nenter two numbers");
    scanf("%d %d",&a,&b);
    add=a+b;
    printf("\nadditiont=%d",add);
    sub = a-b;
    printf("\nsubtraction=%d",sub);
    mul=a*b;
    printf("\nmultiplication=%d",mul);
    div=(float)a/b;
    printf("\ndivision=%f",div);
    mod=a%b;
    printf("\nmodulus=%d",mod);
    return 0;

}