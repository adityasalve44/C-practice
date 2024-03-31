#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter height:");
    scanf("%d",&n);//segmentation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <10; j++)
        {
            printf(" ");
        }
        
        for (int k = 0; k < n*3; k++)
        {
            printf("1");
        }
     printf("\n");
        
    }
    
    return 0;
}
