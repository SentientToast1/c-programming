#include <stdio.h>

void countVowelsAndConsonants(char *inputString, int *vowelsCount, int *consonantsCount) {
    *vowelsCount = 0;
    *consonantsCount = 0;
    char currentChar;

    while (*inputString != '\0') {
        currentChar = *inputString;

            currentChar = (currentChar >= 'A' && currentChar <= 'Z') ? currentChar + ('a' - 'A') : currentChar;

            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                (*vowelsCount)++;
            } else {
                (*consonantsCount)++;
            }


        inputString++;
    }
}

int main() {
    char inputString[1000];
    int vowelsCount, consonantsCount;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    countVowelsAndConsonants(inputString, &vowelsCount, &consonantsCount);

    printf("Vowels: %d\n", vowelsCount);
    printf("Consonants: %d\n", consonantsCount);

    return 0;
}
