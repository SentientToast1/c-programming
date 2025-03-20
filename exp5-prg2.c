#include <stdio.h>
#include <string.h>

int main() {
    char studentName[100], studentGrade[5], copiedName[100];
    char fixedString[] = " - Excellent Student";
    char *token;
    
    printf("Enter student's name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = '\0';  // Remove newline character
    
    printf("Enter student's grade: ");
    fgets(studentGrade, sizeof(studentGrade), stdin);
    studentGrade[strcspn(studentGrade, "\n")] = '\0';  // Remove newline character
    
    printf("Length of student's name: %lu\n", strlen(studentName));
    printf("Length of student's grade: %lu\n", strlen(studentGrade));
    
    strcpy(copiedName, studentName);
    printf("Copied student's name: %s\n", copiedName);
    
    strcat(studentName, fixedString);
    printf("Student's name with fixed string: %s\n", studentName);
    
    int comparisonResult = strcmp(studentName, copiedName);
    if (comparisonResult > 0) {
        printf("The lexicographically greater name is: %s\n", studentName);
    } else if (comparisonResult < 0) {
        printf("The lexicographically greater name is: %s\n", copiedName);
    } else {
        printf("Both names are lexicographically equal.\n");
    }
    
    char *substrPosition = strstr(studentName, "John");
    if (substrPosition) {
        printf("The substring 'John' found at position: %ld\n", substrPosition - studentName);
    } else {
        printf("Substring 'John' not found in the student's name.\n");
    }
    
    char *charPosition = strchr(studentGrade, 'A');
    if (charPosition) {
        printf("The character 'A' found at position: %ld\n", charPosition - studentGrade);
    } else {
        printf("Character 'A' not found in the grade.\n");
    }
    
    token = strtok(studentGrade, " ");
    printf("Tokenized grade components:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    
    return 0;
}

