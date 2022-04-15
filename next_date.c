// Program that writes the next day

#include <stdio.h>

#define TRUE 1
#define FALSE !TRUE

int main() {

    int year, month, day, leap_year, month_length;

    printf("Input a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        leap_year = TRUE;
    else if (year % 100 == 0)
        leap_year = FALSE;
    else if (year % 4 == 0)
       leap_year = TRUE;
    else
        leap_year = FALSE;

    printf("Input a month [1-12]: ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        month_length = 31;
    else if (month == 2) {
        if (leap_year == TRUE)
            month_length = 29;
        else
            month_length = 28;
    }
    else
        month_length = 30;

    printf("Input a day: ");
    scanf("%d", &day);

    if (day < month_length)
        day ++;
    else if (day == month_length) {
        day = 1;
        if (month == 12) {
            month = 1;
            year ++;
        }
        else
            month ++;
    }

    if (1 <= day && day <= month_length && 1 <= month && month <= 12)
        printf("The next date is [yyyy-mm-dd] %d-%d-%d.", year, month, day);
    else
        printf("Invalid date!");

    return 0;
}
