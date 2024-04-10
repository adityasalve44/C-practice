#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("\nEnter a Character:");
    scanf("%c",&a);

    if(isdigit(a))
    {
        printf("\nIt is a Digit:%c\n",a);
    }
    if(isalpha(a))
    {
      if(islower(a))
      {
        a = toupper(a);
        printf("\nconverted to UPPERCASE=%c\n\n",a);
      }
      else{
         a = tolower(a);
        printf("\nconverted to lowercase=%c\n\n",a);
      }
    }
    if(isalnum(a))
    {
     printf("\nIt is  Digit or Alphabet:%c\n",a);   
    }
    return 0;
}