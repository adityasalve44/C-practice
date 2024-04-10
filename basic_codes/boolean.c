#include <stdio.h>
#include <stdbool.h> // Include the standard boolean library

int main() {
    bool isTrue =true;
    bool isFalse = false; 
    // int a=true;
    printf("isTrue: %d\n", isTrue);
    printf("isFalse: %d\n", isFalse);
    // printf("a=%c",a+64);

    if (true)
        {
            printf("This statement is true.\n");
        } 
    else {
        printf("This statement is false.\n");
    }

    if (isFalse) {
        printf("This statement is true.\n");
    } else {
        printf("This statement is false.\n");
    }

    // Boolean expressions
    bool result = true && false; // Logical AND
    printf("Result of isTrue && isFalse: %d\n", result);

    result = true|| isFalse; // Logical OR
    printf("Result of isTrue || isFalse: %d\n", result);

    result = !isFalse; // Logical NOT
    printf("Result of !isFalse: %d\n", result);

    return 0;
}
