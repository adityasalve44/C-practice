#include<stdio.h>
void main(){
    int n, rem, reverse = 0;
    printf("\n Enter a number with two or more than two digits");
    scanf("%d",&n);
        while(n > 0)
        {
            rem = n % 10;
            reverse = rem + (reverse * 10);
            n = n / 10;
        }
    printf("\n Reverse number=%d",reverse);
}