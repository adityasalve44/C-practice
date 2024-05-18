/* Function with no arguments and no return values: */

#include <stdio.h>
int add()
{
    int a, b;
    int sum;
    printf("\nEnter two values:");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("\nAddition:%d", sum);
    return 0;
}
int subtract()
{
    int a, b;
    int sub;
    printf("\nEnter two values:");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("\nSubtraction:%d", sub);
    return 0;
}
int main()
{
    int choice;
    printf("\nEnter 1 for Addition and 2 for Subtraction");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        subtract();
        break;
    
    default:printf("\nWrong input");
        break;
    }
    return 0;
}
// code reusability