#include <stdio.h>
int funcAdd(int x, int y);

int main() {
    printf("This is a printf statement: %d", printf("Hello, world!"));
    funcAdd(4,5);
    return 0;
}
int funcAdd(int x, int y)
{
    printf("Addition =%d",x+y);   
}