#include <stdio.h>


int main(void) {
    float x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    y = 3 * x * x * x * x * x
      + 2 * x * x * x * x
      - 5 * x * x * x
      - 1 * x * x
      + 7 * x
      - 6;
    
    printf("Result: %.2f\n", y);

    return 0;
}
