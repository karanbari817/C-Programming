#include <stdio.h>

int main() {
    int choice;
    double balance = 0.0, amount;

    do {
        // Display menu
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited %.2lf\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrawn %.2lf\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3: // Check balance
                printf("Your current balance is: %.2lf\n", balance);
                break;

            case 4: // Exit
                printf("Exiting the program. Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4); // Repeat until user chooses to exit

    return 0;
}
