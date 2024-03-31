#include<stdio.h>
int main()
{
    int a,b;
    int less,greater,equal;
    printf("\nEnter two values:");
    scanf("%d %d",&a,&b);
    equal = (a==b);
    less = (a<b);                                    
    greater = (a>b);

    printf("A is equal to b and less than 10: %d\n",(equal&&(a<10)));
    printf("A is less than B OR greater than B: %d",(less||greater));
    printf("A is not equal to B: %d",!equal);

}