#include<stdio.h>
int main()
{
    int h;
    printf("\nEnter height of tower:");
    scanf("%d",&h);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h-i; j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
                   
    }
    
    return 0;
}
