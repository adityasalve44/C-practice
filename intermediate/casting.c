#include<stdio.h>
int main()
{
    int a=10;
    float b=3;
    float add = a+b;
    float div;
    printf("\nAddition:%f",a+b);
    printf("\nDivision=%f",a/b);
    int mod = (int)a%(int)b;
    printf("Modulus:%d",mod);
    return 0;
} 