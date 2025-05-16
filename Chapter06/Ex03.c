#include <stdio.h>


int main(void) {
    int n, d, x, y, temp;

    printf("Enter two integers: ");
    scanf("%d/%d", &n, &d);

    if (d == 0) {
        printf("Cannot divide by zero\n");
        return 1;
    }

    x = n;
    y = d;

    while (x != 0) {
        temp = x;
        x = y % x;
        y = temp;
    }

    n /= y;
    d /= y;

    printf("Greatest common divisor: %d/%d\n", n, d);

    return 0;
}
