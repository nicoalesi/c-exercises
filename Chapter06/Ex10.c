#include <stdbool.h>
#include <stdio.h>


int main(void) {
    bool first_input = true;
    int temp_day, temp_month, temp_year, temp_tot;
    int tot, day, month, year;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &temp_month, &temp_day, &temp_year);

        if (!temp_day && !temp_month && !temp_year) {
            break;
        }

        if (temp_day < 1 || temp_day > 31) {
            printf("Invalid day\n");
            return 1;
        }

        if (temp_month < 1 || temp_month > 12) {
            printf("Invalid month\n");
            return 1;
        }

        if (temp_year < 0) {
            printf("Invalid year\n");
            return 1;
        }

        temp_tot = temp_year * 1000 + temp_month * 50 + temp_day;

        if (first_input) {
            day = temp_day;
            month = temp_month;
            year = temp_year;
            tot = temp_tot;
        } else if (temp_tot < tot) {
            day = temp_day;
            month = temp_month;
            year = temp_year;
            tot = temp_tot;
        }

        first_input = false;
    }

    if (first_input) {
        printf("No date entered\n");
    } else {
        printf("%.2d/%.2d/%.2d is the earliest date\n",
                    month, day, year);
    }

    return 0;
}
