#include <stdio.h>
int main(int argc, char const *argv[])
{
    int len;
    printf("\nEnter size of array:");
    scanf("%d", &len);
    int arr[len];
    int temp = 0;
    int reverse[len];
    for (int j = 1, i = 0; i < len; i++)
    {
        j += 2;
        arr[i] = j;
        j++;
    }
    for (int i = 0; i < len; i++)
    {
        printf("\t%d", arr[i]);
    }
    // Using two arrays

    /* for (int j = 0, i = len - 1; i >= 0; j++,i--)
    {
        reverse[j] = arr[i];

    } */

    for (int i = len - 1, j = 0; j<i; j++, i--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("\t%d", arr[i]);
    }

    return 0;
}
