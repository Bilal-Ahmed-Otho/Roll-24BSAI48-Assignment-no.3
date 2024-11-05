#include <stdio.h>

int main() {
    float accountBalance, withdrawalAmount;
    char permit;

    printf("Enter account balance: ");
    scanf("%f", &accountBalance);


printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawalAmount);

    if (accountBalance >= withdrawalAmount) {
        if (withdrawalAmount > 10000) {
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &permit);

            if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal successful.\n");
                printf("Remaining balance: %.2f\n", accountBalance - withdrawalAmount);
            } else {
                printf("Withdrawal denied. Special permit required.\n");
            }
        } else 
		{
            printf("Withdrawal successful.\n");
            printf("Remaining balance: %.2f\n", accountBalance - withdrawalAmount);
        }
    } else 
	{
        printf("Insufficient balance.\n");
    }

    return 0;
}