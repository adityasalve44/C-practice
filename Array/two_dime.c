#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    for (int i = 0; i < 3; i++) // rows
    {
        for (int j = 0; j < 3; j++) // columns
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) // rows
    {
        for (int j = 0; j < 3; j++) // columns
        {
            scanf("%d",&b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) // rows
    {
        for (int j = 0; j < 3; j++) // columns
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", c[i][j]);
        }
    }
    return 0;
}
