#include <stdio.h>
#define PI 3.14 
int main()
{
    int r;
    float area;
    //const float PI = 3.14;
    printf("\nEnter Radius:");
    scanf("%d", &r);
    area = PI * r * r;
    printf("\nArea of circle=%f", area);
    return 0;
}

/**
 * Constant: fixed values
 * Types of Constant;
 * 1.Literal Constant--> Hard-coded int =4 8 87 . float 3.14 9.81 5.55. char '\n'.
 * 2.Symbolic Constant:
 *      1.const keyword:
 *           syntax:
 *      const data_type variable_name = value;  //initialization
 *
 *      2. #define: macro
 *          syntax
 *  
 *          #define macro_name value
 *
 */