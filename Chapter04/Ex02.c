#include <stdio.h>


int main(void) {
    int num, d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%3d", &num);

    d3 = num % 10;
    d2 = (num /= 10) % 10;
    d1 = num / 10;

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}
