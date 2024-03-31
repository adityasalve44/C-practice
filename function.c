#include<stdio.h>
int main()
{
    float fah;
    float temprature;
    printf("enter temprature:");
    scanf("%f",&temprature);
    fah=(temprature*1.8)+32;
    printf("%f",fah);
    return 0;

}
//fahrenheit=(cel*1.8)+32