#include <stdio.h>

// Function prototype with correct type
int sumdigit(int n);

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    // Correct function name in printf
    printf("Sum of digits of %d is %d\n", num, sumdigit(num));
    return 0;
}

int sumdigit(int n) {
    int sum = 0; // Declare sum variable
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum; // Add semicolon
}