#include <stdio.h>

int swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n a=%d b=%d", x, y);
    return 0;
}
int main()
{
    int a,b;
    printf("enter two values");
    scanf("%d %d", &a, &b);
    printf("\n a=%d b=%d", a, b);
    swap(a,b);  //function call
    return 0;
}
/**
 *   a_a
 * thisisthenameofmyfuncion()
*/