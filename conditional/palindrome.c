#include <stdio.h>
int main()
{
    int n;
    int palin = 0, last;
    printf("\nEnter a number:");
    scanf("%d", &n);
    int number = n;
    for (int i = 0; n != 0; i++)
    {
        last = n % 10;
        n = n / 10;   
        palin *= 10;  
        palin += last;
    }

    if (number == palin)
        printf("\n number is a Palindrome");
    else
        printf("\n number is not a Palindrome");
    return 0;
}
/*
    last= n%10;
    palin = palin*10+last;
    n=n/10;
*/
/*********************************/
    /*
        last=n%10;
        n=n/10;
        palin*=10;
        palin+=last;
    */
