/* Function with  arguments but no return values: */

#include <stdio.h>
int add(int x, int y)
{
    return (x + y);
}
int subtract(int a, int b)
{
    return (a - b);
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
        int sum = add(a, b);
        printf("\nAddition:%d", sum);
        break;
    case 2:
        int sub = subtract(a, b);
        printf("\nSubtraction:%d", sub);
        break;

    default:
        printf("\nWrong input");
        break;
    }
    return 0;
}
// code reusability