#include <stdio.h>


int main(void) {
    int  n1,  n2,  n3,  n4;
    int  n5,  n6,  n7,  n8;
    int  n9, n10, n11, n12;
    int n13, n14, n15, n16;
    int row1, row2, row3, row4;
    int col1, col2, col3, col4;
    int dia1, dia2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
            &n1,   &n2,  &n3,  &n4,
            &n5,   &n6,  &n7,  &n8,
            &n9,  &n10, &n11, &n12,
            &n13, &n14, &n15, &n16);

    printf("\n");
    printf("%2d %2d %2d %2d\n", n1, n2, n3, n4);
    printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
    printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
    printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);
    printf("\n");

    row1 = n1 + n2 + n3 + n4;
    row2 = n5 + n6 + n7 + n8;
    row3 = n9 + n10 + n11 + n12;
    row4 = n13 + n14 + n15 + n16;
    printf("Row sums: %.2d %.2d %.2d %.2d\n", row1, row2, row3, row4);

    col1 = n1 + n5 + n9 + n13;
    col2 = n2 + n6 + n10 + n14;
    col3 = n3 + n7 + n11 + n15;
    col4 = n4 + n8 + n12 + n16;
    printf("Column sums: %.2d %.2d %.2d %.2d\n", col1, col2, col3, col4);

    dia1 = n1 + n6 + n11 + n16;
    dia2 = n4 + n7 + n10 + n13;
    printf("Diagonal sums: %.2d %.2d\n", dia1, dia2);

    return 0;
}
