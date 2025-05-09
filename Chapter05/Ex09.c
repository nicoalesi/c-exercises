#include <stdio.h>


int main(void) {
    int d1, m1, y1, d2, m2, y2;
    int tot1, tot2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    // Weighted sum to ensure priority (y > m > d), not actual day count
    tot1 = y1 * 1000 + m1 * 50 + d1;
    tot2 = y2 * 1000 + m2 * 50 + d2;
    
    if (tot1 == tot2) {
        printf("%.2d/%.2d/%.2d and %.2d/%.2d/%.2d are the same date\n",
                    m1, d1, y1, m2, d2, y2);
    } else if (tot1 < tot2) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
                    m1, d1, y1, m2, d2, y2);
    } else {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
                    m2, d2, y2, m1, d1, y1);
    }

    return 0;
}
