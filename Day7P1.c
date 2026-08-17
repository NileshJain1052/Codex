/*Write a program to input a year and check whether it is a leap year or not using conditional statements.*/
#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check whether the year is a leap year
    if (year % 400 == 0) {
        printf("Leap Year");
    }
    else if (year % 100 == 0) {
        printf("Not a Leap Year");
    }
    else if (year % 4 == 0) {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }

    return 0;
}