#include <stdio.h>


int main(void) {
    float speed;

    printf("Enter wind's speed in knots: ");
    scanf("%f", &speed);

    if (speed < 1) {
        printf("Description: calm\n");
    } else if (speed < 3) {
        printf("Description: light air\n");
    } else if (speed < 27) {
        printf("Description: breeze\n");
    } else if (speed < 47) {
        printf("Description: gale\n");
    } else if (speed < 63) {
        printf("Description: storm\n");
    } else {
        printf("Description: hurricane\n");
    }

    return 0;
}
