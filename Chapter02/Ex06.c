#include <stdio.h>


int main(void) {
    float x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    y = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Result: %.2f\n", y);

    return 0;
}
