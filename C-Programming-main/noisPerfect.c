#include <stdio.h>

int sumOfDivisors(int n, int i) {
    if (i == 0)
        return 0;
    if (n % i == 0)
        return i + sumOfDivisors(n, i - 1);
    else
        return sumOfDivisors(n, i - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDivisors(num, num / 2); 
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);

    return 0;
}
