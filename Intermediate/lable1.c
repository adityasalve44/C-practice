#include<stdio.h>
int main()
{
    int i=1;

    lable:
    {
        printf("i=%d\n",i);
        i++;

    }
    if(i<6)
    {
        goto lable;
    }
    return 0;
}
