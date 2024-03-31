#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    int b=10;
    printf("\na=%d\tb=%d",a,b);
    printf("\na=%d\tb=%d pre incr",++a,++b);//pre-increment=11
    printf("\na=%d\tb=%d pre decr",--a,--b);//pre-decrement=10

    printf("\na=%d\tb=%d post decr",a--,b--);//post-decrement=9
    printf("\na=%d\tb=%d post decr",a++,b++);//post-increment=10
    printf("\na=%d\tb=%d",a,b);//10
    printf("\n");
    return 0;
}
