#include <stdio.h>

int main() {
    float purchaseAmount;
    char isMember;

    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    if (purchaseAmount > 2000) {
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &isMember);

        if (isMember == 'Y' || isMember == 'y') {
            printf("Discount: 20%%\n");
            printf("Final amount: %.2f\n", purchaseAmount * 0.8);
        } else {
            printf("Discount: 10%%\n");
            printf("Final amount: %.2f\n", purchaseAmount * 0.9);
        }
    } else {
        printf("No discount applicable.\n");
        printf("Final amount: %.2f\n", purchaseAmount);
    }

    return 0;
}

