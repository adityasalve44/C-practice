#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1, n, prod;
    printf("\nEnter any number");
    scanf("%d",&n);
    do
    {
        prod = n*i;
        printf("\n%d",prod);
        i++;
    } while(i<=10);

    return 0;
}
