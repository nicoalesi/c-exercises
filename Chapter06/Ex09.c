#include <stdio.h>


int main(void) {
    float amount, rate, payment;
    int num;

    printf("Enter the total amount of the loan: ");
    scanf("%f", &amount);
    printf("Enter the interest rate: ");
    scanf("%f", &rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &payment);
    printf("Enter the number of payments: ");
    scanf("%d", &num);

    rate /= 100;

    for (int i = 1; i <= num; i++) {
        amount = amount * (1 + rate / 12) - payment;
        printf("Balance remaining after %d payment: %.2f\n", i, amount);
    }

    return 0;
}
