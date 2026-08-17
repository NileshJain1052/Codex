/*Write a program to input an integer and check whether it is even or odd using if–else.*/
#include <stdio.h>

int main() 
 {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check whether the number is even or odd
    if (num % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }

    return 0;
 }