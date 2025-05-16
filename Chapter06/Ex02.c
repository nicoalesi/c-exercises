#include <stdio.h>


int main(void) {
    int n, m, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while (n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}
