#include <stdio.h>


int main(void) {
    int num, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%2d", &num);

    d2 = num % 10;
    d1 = num / 10;

    printf("The reversal is: %d%d\n", d2, d1);

    return 0;
}
