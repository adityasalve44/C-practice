#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    char str2[10];
    char str3[20];

    printf("\nEnter Your Name:");
    scanf("%s", str);
    scanf("%s", str2);
    strcat(str, str2);
    printf("%s", str);
    int len = strlen(str);
    printf("\n%d\n", len);
    strcpy(str3, str2);
    printf("%s", str);
    return 0;
}

// Concatenation