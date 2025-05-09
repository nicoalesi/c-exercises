#include <stdio.h>


int main(void) {
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours < 0 || hours > 23) {
        printf("Invalid time\n");
        return 1;
    }

    if (minutes < 0 || minutes > 59) {
        printf("Invalid time\n");
        return 1;
    }

    if (hours < 1) {
        printf("Equivalent 12-hour time: 12:%.2d AM\n", minutes);
    } else if (hours < 12) {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hours, minutes);
    } else if (hours < 13) {
        printf("Equivalent 12-hour time: 12:%.2d PM\n", minutes);
    } else {
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hours - 12, minutes);
    }

    return 0;
}
