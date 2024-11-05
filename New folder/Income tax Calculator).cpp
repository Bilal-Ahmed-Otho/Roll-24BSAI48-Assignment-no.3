#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.10 ; // 5% on 250001-500000 + 10% on 500001-1000000
    } else {
        tax = (income - 1000000) * 0.15; // 5% on 250001-500000 + 10% on 500001-1000000 + 15% above 1000000
    }

    printf("Tax: %.2f\n", tax);
    printf("Final income: %.2f\n", income - tax);

    return 0;
}