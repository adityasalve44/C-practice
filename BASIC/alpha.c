#include <stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("enter the any input:");
    scanf("%c",&ch);
    (isalpha(ch))?(islower(ch))?
    printf("\n%c is the lowercase alphabet",ch):printf("\n%c is uppercase alphabet",ch):
    printf("\n%c is not alphabet",ch);
    (isdigit(ch))?printf("\n%c is an digit",ch):printf("\n%c is not digit",ch);
    ch ='S';
    printf("\n%c lowercase  is %c",ch,tolower(ch));
}