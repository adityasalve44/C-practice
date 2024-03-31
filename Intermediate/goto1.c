#include<stdio.h>
void main()
{
    int k=0;
    label:
    printf("k=%d\n",k);
    k++;
    if(k<100)
    goto label;
    }