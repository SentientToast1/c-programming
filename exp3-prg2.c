#include <stdio.h>

int main() {
    int n, a = 0, b = 1, sum = 0, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
    }
    else {
        int i = 1;
        do {
            sum += a;
            temp = a + b;
            a = b;
            b = temp;
            i++;
        } while (i <= n);

        printf("The sum of the Fibonacci series up to %d terms is: %d\n", n, sum);
    }

    return 0;
    //16010124155
}
