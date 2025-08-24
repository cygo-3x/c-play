#include <stdio.h>

int main()
{
    // TEMPERATURE CONVERSION CALCULATOR

    // declare variables
    char choice = '\0';     // CHOICE AS CHARACTER
    double celsius = 0.0;
    double fahrenheit = 0.0;
    double temp = 0.0;

    printf("Temperature Conversion Calculator\n");

    // display choice
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");

    // ask for input
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    // check choice condition, calculate, and give output
    if (choice == 'C') {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &celsius);

        temp = (celsius * 9 / 5) + 32;
        printf("%.1lf Celsius is equal to %.1lf Fahrenheit.\n", celsius, temp);
    }
    else if (choice == 'F') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);

        temp = (fahrenheit - 32) * 5 / 9;
        printf("%.1lf Fahrenheit is equal to %.1lf Celsius.\n", fahrenheit, temp);
    }
    else {
        printf("Invalid input! Please enter C or F.\n");
    }

    return 0;
}