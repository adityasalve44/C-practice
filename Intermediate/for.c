#include<stdio.h>
int main()
{
    int a;
    int factorial=1;
    printf("\nEnter a value:");
    scanf("%d",&a);
    for (int i = a; i > 0; i--)
    {
        factorial*=i; //  factorial= factorial *i
    }
    printf("\nFactorial :%d",factorial);    
    return 0;
}

/**
 * for(initialization; condition; incr/decr)
 * {
 *     initialization--> variable --> traversing
 *     condition  --> limit break
 * }
*/








/* #include<stdio.h>
int main()
{
    int a;
    int factorial=1;
    printf("\nEnter a value:");
    scanf("%d",&a);
    start:
        factorial*=a;
        a--;
    if(a>0) goto start;
    printf("\nFactorial :%d",factorial);
    return 0;
} */
