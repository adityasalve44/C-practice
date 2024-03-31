#include<stdio.h>

int a=111;  //global
void func();

int main()
{
    int n=10;//local declaration
    printf("%d\n",a);
    func();
    return 0;
}
void func()
{
    int c;//local
    printf("%d\n",a);
}