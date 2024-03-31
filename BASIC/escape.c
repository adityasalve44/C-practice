#include <stdio.h>
int main() 
{
    printf("Escape Sequences Example:\n");
    printf("1. Newline: Hello\nWorld\n");
    printf("2. Tab: Name:\tJohn\n");
    printf("3. Backspace: Hello\bWorld\n");
    printf("\nHellooooo\rWorld\n");
    printf("5. Backslash: This is a backslash: \\\n");
    printf("\nThis is vertical\v TAB\n");
    printf("6. Double Quote: He said, \"Hello!\"\n");
    printf("7. Single Quote: It's sunny today.\n");
    printf("8. Null Character: %s\n", "Hello\0World");
    return 0;
}   