/*
    Code for Converting celcius to Fahrenheit temperature conversion
*/

#include<stdio.h>
int main()
{
    float ctemp;
    float ftemp;
    printf("\nEnter temp in celcius:");
    scanf("%f",&ctemp);
    ftemp = (9/5 * ctemp)+32;
    printf("Temperature in Fahrenheit=%.1fF\n",ftemp);

    return 0;
}
/*
    Output:
    Enter temp in celcius:25
    Temperature in Fahrenheit=57.0F
*/