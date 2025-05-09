#include <stdio.h>


int main(void) {
    float amount, rate, payment;

    printf("Enter the total amount of the loan: ");
    scanf("%f", &amount);
    printf("Enter the interest rate: ");
    scanf("%f", &rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &payment);

    rate /= 100;

    amount = amount * (1 + rate / 12) - payment;
    printf("Balance remaining after first payment: %.2f\n", amount);
    amount = amount * (1 + rate / 12) - payment;
    printf("Balance remaining after second payment: %.2f\n", amount);
    amount = amount * (1 + rate / 12) - payment;
    printf("Balance remaining after third payment: %.2f\n", amount);

    return 0;
}
