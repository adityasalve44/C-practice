#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("\n Enter a value alphabet or digit:");
    scanf("%c",&ch);
/*      
    ch = '7';
    (isalnum(ch))?
        printf("%c is alphanumeric.\n", ch): 
        printf("%c is not alphanumeric.\n", ch);
     
    ch = '9';
    (isdigit(ch))?
        printf("%c is a digit.\n", ch): 
        printf("%c is not a digit.\n", ch);
  
    ch = 'a';
    (islower(ch))?
        printf("%c is lowercase.\n", ch): 
        printf("%c is not lowercase.\n", ch);
     
    ch = 'Z';
    (isupper(ch))?
        printf("%c is uppercase.\n", ch): 
        printf("%c is not uppercase.\n", ch);

    ch = 'H';
    printf("Lowercase of %c is %c.\n", ch, tolower(ch));
  
    ch = 'h';
    printf("Uppercase of %c is %c.\n", ch, toupper(ch));
 */
    
    
    (isalpha(ch))? (islower(ch))? printf("%c is a lowercase alphabet",ch): printf("%c is Uppercase alphabet.\n", ch) : printf("%c is not an alphabet.\n", ch);
    
    return 0;
}
