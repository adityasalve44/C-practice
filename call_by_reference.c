//Call by Reference

#include<stdio.h>
int swap(int * , int *);
int main()
{
    int a,b;
    printf("\nEnter two values:");
    scanf("%d %d",&a,&b);
    printf("\nA=%d and B=%d\n",a,b);
    swap(&a,&b);
    return 0;
}
//Syntax:   data_type *identifier = address

int swap(int *x, int *y)
{   
    int temp;
    temp =*x;//&a
    *x=*y;//&b
    *y=temp;//&a
    printf("A=%d and B=%d\n",*x,*y);
    return 0;
}