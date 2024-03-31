#include<stdio.h>
int main()
{
    for (int i=0; i<5; i++)
   {
        for (int j=0; j<6; j++)
        {
            for (int k=0; k<5; k++)
            {
                printf(" *");
            }
            printf("\t");
        }
        printf("\n");
   }

    return 0;
}

/**
 * Steps in executing for loop:
 * 1. Initialization
 * 2. Condition 
 *  2.a.If true-->Execute Statement/s
 *  2.b.If false-->Out of loop/terminate loop
 * 3.Incr/Decr
 * 4.repeat from step 2
*/