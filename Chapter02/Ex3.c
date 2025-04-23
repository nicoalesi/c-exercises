#include <stdio.h>

#define PI 3.1415


int main(void) {
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = 4.0f/3.0f * PI * radius * radius * radius;
    printf("Volume: %.2f\n", volume);

    return 0;
}
