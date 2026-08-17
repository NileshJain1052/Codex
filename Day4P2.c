/*Write a program to find and display the sum of the first n natural numbers.*/
#include <stdio.h>

int main() {
    int n, sum;

    // Input the value of n
    printf("Enter n: ");
    scanf("%d", &n);

    // Calculate the sum
    sum = n * (n + 1) / 2;

    // Display the result
    printf("Sum = %d", sum);

    return 0;
}