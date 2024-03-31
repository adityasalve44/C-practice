#include <stdio.h>
int main()
{
    int arrsize;
    int a[] = {100, 5, 201, 13, 4, -8, 12, 91, 3, 56};
    int largest = a[0];
    int smallest = a[0];
    arrsize = sizeof(a) / sizeof(int);
    printf("Array elements:");
    for (int i = 0; i < arrsize; i++)
    {
        printf("\t%d", a[i]);
    }
    for (int i = 1; i < arrsize; i++)
    {
        if (a[i] > largest)      largest = a[i];
        if (a[i] < smallest)     smallest = a[i];
    }
    printf("\nLargest value = %d", largest);
    printf("\nSmallest value = %d", smallest);
   
    return 0;
}
