/*Write a program to swap two numbers using a third variable.*/
#include <stdio.h>

int main() 
 {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped numbers
    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
 }