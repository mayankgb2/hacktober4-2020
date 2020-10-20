#include <stdio.h>
int main() {
    int n, i;
//Initialize the fact variable
    unsigned long long fact = 1;
    printf("Enter an integer: ");
//Taking input
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
