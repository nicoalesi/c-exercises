#include <stdio.h>


int main(void) {
    float amount, tax = 0.05;

    printf("Enter the amount of money to be taxed: ");
    scanf("%f", &amount);

    amount *= (1 + tax);
    printf("Taxed amount: %.2f\n", amount);

    return 0;
}
