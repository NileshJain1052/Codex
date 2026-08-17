/*Write a program to swap two numbers without using a third variable.*/
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped numbers
    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}