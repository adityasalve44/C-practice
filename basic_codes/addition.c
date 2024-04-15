#include <stdio.h>
int main(int a, int b)
{
    int sum;
    printf("\nEnter two values:");
    scanf("%d %d", &a, &b);
    printf("a=%d b=%d", a, b);
    sum = a + b;
    printf("\nAddition:%d",sum);
    return 0;
}

/**
 * Operators:
 * 1.Arithmatic: + - * / %
 * 2.Logical    : &&(AND) ||(OR) !(NOT)
 * 3.Relational : < > == <= >= !=
 * 4.Bit-Wise : & | >> << ^
 * 5.Assignment: = += -= *= /= %=
 * 6.Increment/Decrement: ++ --
 * 7.Other : sizeof  ? : & *
 *
 */
// scanf("type_specifier1 type_specifier2 type_specifier3 ...type_specifierN",variable_name1,variable_name2,variable_name3,..variable_nameN);