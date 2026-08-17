/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float SI, CI;

    // Input principal, rate and time
    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    SI = (principal * rate * time) / 100;

    // Calculate Compound Interest
    CI = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}