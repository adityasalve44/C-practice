#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    short int s;
    char ch='a';
    long int lg;
    unsigned int u;
    float f;
    double d;
    unsigned long size=sizeof(s);
    long double ld = 78;
    printf("\nsize of an int: %ld",sizeof(a));
    printf("\nsize of an short int: %ld",size);
    printf("\nsize of an char: %ld",sizeof(ch));
    printf("\nsize of an long int: %ld",sizeof(lg));
    printf("\nsize of an unsigned: %ld",sizeof(u));
    printf("\nsize of an float: %ld",sizeof(f));
    printf("\nsize of an double: %ld",sizeof(d));
    printf("\nsize of an long double: %ld",sizeof(ld));
    printf("\n%Lf",ld);
    return 0;
}
