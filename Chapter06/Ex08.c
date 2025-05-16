#include <stdio.h>


int main(void) {
    int days, start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    printf("\n");
    for (int i = 1; i < start; i++) {
        printf("   ");
    }

    for (int i = 1; i <= days; i++) {
        printf("%2d ", i);

        if ((i + start - 1) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n\n");

    return 0;
}
