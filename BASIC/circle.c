#include<stdio.h>
#define FORMULA 3.14*r*r
int main()
{
    
    int r;
    const float pi=3.14;
    float area;
    printf("\nEnter the radius:");
    scanf("%d",&r);
    area=FORMULA;
    printf("\nThe area of circle is:%f",area);
    area = pi *r*r;
    printf("\nThe area of circle is:%f",area);
    return 0;
}