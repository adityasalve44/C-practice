#include<stdio.h>
int main()
{   
    int range,n;
    printf("\nEnter a number:");
    scanf("%d",&range);
    for(int j=0; j<=range; j++)
    {
        n=j;
        int flag = 0; 
        if(n==0 || n==1)
            continue;
        
        for (int i = 2; i <= n/2; i++)
        {
            if(n%i==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("\t%d", n);
        } 
    }
    return 0;
}
