#include<stdio.h>
int main()
{
    int n;int a=n;
    int i=1;
    printf("\nEnter any number");
    scanf("%d",&n);
    do{
        a=n*i;
        printf("\n%d*%d=%d",n,i,a);
        i++;
    }while(i<=10);

    // while (i<=10)
    // {
    //     a=n*i;
    //     printf("\n %d * %d = %d ",n,i,a);
    //     i++;   
    // }
    

    return 0;
}
