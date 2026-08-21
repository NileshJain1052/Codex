/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the type of character
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }

    return 0;
}