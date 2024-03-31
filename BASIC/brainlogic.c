#include<stdio.h>
int main()
{
    int a,b;
    int less,greater,equal;
    printf("enter two values:");
    scanf("%d %d",&a,&b);
    equal = (a==b);
    less = (a<b);
    greater = (a>b);
    printf("\na is equal to b or less than b:%d",((a==b)||(a<b)));
    printf("\na is greater than b and less than b %d",((a>b)&&(a<b)));
    printf("\na is not equal to b %d",!(a==b));
}   
