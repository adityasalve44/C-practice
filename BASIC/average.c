#include<stdio.h>
int main()
{
    float average;
    printf("enter average value: ");
    scanf("%f",&average);
    if(average>80)
    {
        printf("pass with first class");
    }
   else if(average>70)
    {
        printf("pass with second class");
    }
    else if(average>60)
    {
        printf("pass with third class");
    }
    else if(average>=35)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

}