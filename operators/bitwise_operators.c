#include<stdio.h>
int main()
{
    long long unsigned int a=10;
    unsigned int b=5;
    printf("\n a and b=%llu",(a&b));
    printf("\n a or b=%llu",(a|b));
    printf("\n a xor b=%llu",(a^b));
    printf("\n comple of a=%llu",(~a));
    printf("\n a leftshift by 2:%llu",(a<<2));
    printf("\n a rightshift by 2:%llu\n",(a>>2));
    return 0;
}