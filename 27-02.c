#include <stdio.h>
#include <ctype.h>

int main() {
    // Check for character 'A'
    char c = 'A';
    printf("Character: %c\n", c);
    printf("Is alphanumeric: %d\n\n", isalnum(c)); // returns 1 if alphanumeric, 0 otherwise

    // Check for character '1'
    c = '1';
    printf("Character: %c\n", c);
    printf("Is alphanumeric: %d\n\n", isalnum(c));

    // Check for character '%'
    c = '%';
    printf("Character: %c\n", c);
    printf("Is alphanumeric: %d\n\n", isalnum(c));

    // Check for character 'z'
    c = 'z';
    printf("Character: %c\n", c);
    printf("Is alphanumeric: %d\n\n", isalnum(c));

    return 0;
}

