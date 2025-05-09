#include <stdio.h>


int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int sum1, sum2, result;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

    sum1 = d1 + d3 + d5 + d7 + d9 + d11;
    sum2 = d2 + d4 + d6 + d8 + d10;
    result = 9 - (sum1 * 3 + sum2 - 1) % 10;

    printf("Check digit: %d\n", result);

    return 0;
}
