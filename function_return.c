/* Function with no arguments but return value */

#include <stdio.h>
int add()
{
    int a, b;
    printf("\nEnter two values:");
    scanf("%d %d", &a, &b);
    return (a+b);
}
int subtract()
{
    int a, b;
    printf("\nEnter two values:");
    scanf("%d %d", &a, &b);
    return (a-b);
}
int main()
{
    int choice;
    printf("\nEnter 1 for Addition and 2 for Subtraction");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        int sum = add();
        printf("\nAddition:%d",sum);
        break;

    case 2:
        int sub = subtract();
         printf("\nSubtraction:%d",sub);
        break;

    default:
        printf("\nWrong input");
        break;
    }
    return 0;
}
// code reusability