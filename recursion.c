#include <stdio.h>
int factorial(int n);
int main()
{
    int a;
    printf("\nEnter a value:");
    scanf("%d", &a);
    a = factorial(a);
    printf("\nFactorial = %d", a);
    return 0;
}

int factorial(int n)
{
    if (n<=1)
    {   
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
//n=5
// 5 x factorial(4) xfactorial(3)xfactorial(2)=120