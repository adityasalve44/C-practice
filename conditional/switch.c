#include<stdio.h>
int main()
{
    char choice;
    printf("\nEnter an Alphabet:");
    scanf("%c",&choice);
    int a;

    switch (choice) //parentheses--()
    {
 
    case 'a':
    case 'A':
        printf("\n%c is a vowel",choice);
        

        break;

    case 'e':
    case 'E':
        printf("\n%c is a vowel",choice);
        break;

    case 'i':
    case 'I':
        printf("\n%c is a vowel",choice);
        break;

    case 'o':
    case 'O':
        printf("\n%c is a vowel",choice);
        break;

    case 'u':
    case 'U':
        printf("\n%c is a vowel",choice);
        break;

    default:
        printf("\nIs not a vowel");
        break;
    }
    return 0;
}
