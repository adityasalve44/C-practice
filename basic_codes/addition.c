

#include<stdio.h>
int main ()
{
    int a, b;
    printf("Enter the value");
    scanf("%d %d", &a,&b);
    int add=a+b;
    printf("\n%d",add);
    printf("\naddress of a=%p",&a);
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


// 4byte - 32bit=

// 128 64 32 16 8 4 2 1 =255
// 1 0 1 0 1 1 0 1
// 4294967295