#include<stdio.h>
int main()
{
    long int a;
    int count=0;
    int add=0;
    int last;
    printf("enter number");
    scanf("%ld",&a);
    while(a!=0)
    {
        last=a%10;
        add+=last;
        a=a/10;
        count++;
    }
    
    printf("\nNumber of digits=%d\n",count);
    printf("Addition of digits=%d\n",add);

}