#include <stdio.h>


int main(void) {
    int shares;
    float trade_value, price, commission1, commission2;

    printf("Enter the number of shares traded: ");
    scanf("%d", &shares);

    printf("Enter the price per share: ");
    scanf("%f", &price);

    trade_value = shares * price;

    if (trade_value < 2500) {
        commission1 = 30 + trade_value * 0.017;
    } else if (trade_value < 6250) {
        commission1 = 56 + trade_value * 0.0066;
    } else if (trade_value < 20000) {
        commission1 = 76 + trade_value * 0.0034;
    } else if (trade_value < 50000) {
        commission1 = 100 + trade_value * 0.0022;
    } else {
        commission1 = 255 + trade_value * 0.0009;
    }

    if (shares < 2000) {
        commission2 = 33 + shares * 0.03;
    } else {
        commission2 = 33 + shares * 0.02;
    }

    printf("Broker's commission: %.2f\n", commission1);
    printf("Rival's commission: %.2f\n", commission2);

    return 0;
}
