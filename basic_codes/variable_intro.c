#include <stdio.h>
int main()
{

   int radius;
   const float pi = 3.14;
   float area;
   printf("\nEnter radius:");
   scanf("%d", &radius);
   area = pi * radius * radius;
   printf("Area of circle=%f", area);
   return 0;
}
// Associativity==
/**
 * Tokens:
 * 1.Keywords-->reserved words 32 system
 * 2.Identifiers-->User defined names for functions, variables
 * 3.Constants--
 * 4.Operators- =(Assignment)-->right-->left RHS=>LHS (LHS -- variable)
 * 5.Data Types-->int(%d/%i), float(%f), double(%f), char(%c)
 */

// variables:Names which are used to hold values
/**
 * Syntax:Variable Declaration
 *
 *      data_type variable_name ;
 *      variable_name = 10;
 *
 * Variable initialization:
 * int a;  declaration
 * int b=20; initialization
 *
 */