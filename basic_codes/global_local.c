#include <stdio.h>
int addition(int , int);
int main(int sum)
{
    sum= addition(10,20);
    printf("\nAddition:%d", sum);
    return 0;
}

int addition(int x, int y)
{
    return x+y;
}