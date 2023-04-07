#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

// function to read data into structure members
void readData(struct date* d) {
    printf("Enter day: ");
    scanf("%d", &d->day);
    printf("Enter month: ");
    scanf("%d", &d->month);
    printf("Enter year: ");
    scanf("%d", &d->year);
}

// function to validate the data entered
int validateData(struct date d) {
    int maxDays;
    if (d.month < 1 || d.month > 12) {
        printf("Invalid month.\n");
        return 0;
    }
    if (d.year < 1) {
        printf("Invalid year.\n");
        return 0;
    }
    if (d.day < 1) {
        printf("Invalid day.\n");
        return 0;
    }
    if (d.month == 2) {
        if (d.year % 4 == 0) {
            if (d.year % 100 == 0 && d.year % 400 != 0) {
                maxDays = 28;
            } else {
                maxDays = 29;
            }
        } else {
            maxDays = 28;
        }
    } else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
        maxDays = 30;
    } else {
        maxDays = 31;
    }
    if (d.day > maxDays) {
        printf("Invalid day for the month and year.\n");
        return 0;
    }
    return 1;
}

// function to print the date in the format April 29, 2002
void printDate(struct date d) {
    char* monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%s %d, %d\n", monthNames[d.month - 1], d.day, d.year);
}

int main() {
    struct date d;
    readData(&d);
    if (validateData(d)) {
        printDate(d);
    } else {
        printf("Invalid date.\n");
    }
    return 0;
}
