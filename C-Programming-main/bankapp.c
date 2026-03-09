#include <stdio.h>

// Function to input user details
void getUserDetails(char name[], int *accountNumber, float *balance) {
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your account number: ");
    scanf("%d", accountNumber);
    printf("Enter your account balance: ");
    scanf("%f", balance);
}

// Function to display user details
void UserDetails(char name[], int accountNumber, float balance) {
    printf("\n--- Bank User Details ---\n");
    printf("Name: %s\n", name);
    printf("Account Number: %d\n", accountNumber);
    printf("Balance: %.3f\n", balance);
}

int main() {
    char name[50];
    int accountNumber;
    float balance;

    // Get details from user
    getUserDetails(name, &accountNumber, &balance);

    // Display details
    UserDetails(name, accountNumber, balance);

    return 0;
}
