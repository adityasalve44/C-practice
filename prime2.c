#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, flag=1;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            flag =1;
        }
    }
        if(flag==1) printf("\n%d is a prime number",n);
        else printf("\n%d is not a prime number",n);
    
    return 0;
}
