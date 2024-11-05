#include <stdio.h>

int main() {
    float monthlyIncome;
    char existingLoan, overduePayments;

    printf("Enter monthly income: ");
    scanf("%f", &monthlyIncome);

    if (monthlyIncome >= 30000) {
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &existingLoan);

        if (existingLoan == 'Y' || existingLoan == 'y') {
            printf("Do you have any overdue payments? (Y/N): ");
            scanf(" %c", &overduePayments);

            if (overduePayments == 'Y' || overduePayments == 'y') {
                printf("Loan application rejected due to overdue payments.\n");
            } else {
                printf("Loan application approved.\n");
            }
        } else {
            printf("Loan application approved.\n");
        }

    } else {
        printf("Loan application rejected due to low income.\n");
    }

    return 0;
}