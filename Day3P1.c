/*Write a program to convert temperature from Celsius to Fahrenheit.*/
#include <stdio.h>

int main()
 {
    int celsius, fahrenheit;

    // Input temperature in Celsius
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%d", fahrenheit);

    return 0;
 }