#include <stdio.h>


int main(void) {
    int amount, twenties, tens, fives, ones;

    printf("Enter the amount of money: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    amount %= 20;

    tens = amount / 10;
    amount %= 10;

    fives = amount / 5;
    amount %= 5;

    ones = amount;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}
