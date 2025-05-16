#include <stdio.h>

int main(void) {
    double e = 1.0, factorial = 1.0;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximation of e with precision %d: %.10f\n", n, e);

    return 0;
}
