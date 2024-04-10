#include<stdio.h>
int main()
{
    int a=5;
    int b=5;
    printf("\na=%d\tb=%d",a,b);
    printf("\na=%d\tb=%d pre increment",++a,++b);
    printf("\na=%d\tb=%d pre decrement",--a,--b);
    printf("\na=%d\tb=%d post increment",a++,b++);
    printf("\na=%d\tb=%d post decrement",a--,b--);
    return 0;
}