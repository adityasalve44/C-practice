#include <stdio.h>
void main ()
{
    int a = 0;
    do {
        if( a == 5)
        {
            a++;
            continue;
        }
        printf("value of a: %d\n", a);
        a++;
    } while( a < 10 );
}