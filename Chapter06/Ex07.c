#include <stdio.h>


int main(void) {
    int n;

    printf("This program prints a table of squares\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }
    printf("\n");

    return 0;
}
