#include <stdio.h>


int main(void) {
    double epsilon, e = 1.0, factorial = 1.0;

    printf("Enter a value for epsilon: ");
    scanf("%lf", &epsilon);

    for (int i = 1; (1 / factorial) >= epsilon; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximation of e: %.10f\n", e);

    return 0;
}
