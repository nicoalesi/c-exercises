#include <stdio.h>


int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number too low\n");
        return 1;
    }

    printf("Even squares from 1 to n:\n");
    for (int i = 2; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
