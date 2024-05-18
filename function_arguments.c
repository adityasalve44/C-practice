/* Function with  arguments but no return values: */

#include <stdio.h>
int add(int a, int b)
{
    
    int sum;
    sum = a + b;
    printf("\nAddition:%d", sum);
    return 0;
}
int subtract(int a, int b)
{
    int sub;
    sub = a - b;
    printf("\nSubtraction:%d", sub);
    return 0;
}
int main()
{
    int a, b;
    int choice;
    printf("\nEnter two values:");
    scanf("%d %d", &a, &b);
    printf("\nEnter 1 for Addition and 2 for Subtraction");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        subtract(a,b);
        break;

    default:
        printf("\nWrong input");
        break;
    }
    return 0;
}
// code reusability