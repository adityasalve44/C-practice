#include <stdio.h>
void main() {
    int rows, i, j, k;
    for(i=0; i<15; i++) 
    {
        if(i<5||i>9){

            for(j=0; j<5; j++) 
            {
                printf("  ");
            }
        }
        if(i>4 && i<10)
        {
            for(int l=0; l<15; l++) {
            printf("+ ");
        }
        }else
        {
        for(k=0; k<5; k++) {
            printf("+ ");
        }

        }
        printf("\n");
    }
}

