#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Number cannot be negative. Exiting program.\n");
        exit(EXIT_FAILURE); // Exit with failure status
    }

    printf("You entered: %d\n", num);

    return 0;
}
