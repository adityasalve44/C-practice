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

//factorial using goto statement

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

/**
 * for(initialization; condition; incr/decr)
 * {
 *     //statements;
 * }
*/


/**
 * Steps in executing for loop:
 * 1. Initialization
 * 2. Condition 
 *  2.a.If true-->Execute Statement/s
 *  2.b.If false-->Out of loop/terminate loop
 * 3.Incr/Decr
 * 4.repeat from step 2
*/








