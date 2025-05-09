#include <stdio.h>


int main(void) {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%3d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Invalid grade\n");
        return 1;
    }

    switch (grade / 10) {
        case 9: case 10:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        default:
            printf("Letter grade: F\n");
            break;
    }

    return 0;
}
