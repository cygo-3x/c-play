#include <stdio.h>

int main()
{
    // WEIGHT CONVERSION CALCULATOR

    // declare variables
    int choice = 0;         // CHOICE AS INTEGER
    double kilograms = 0.0;
    double pounds = 0.0;
    double weight = 0.0;

    printf("Weight Conversion Calculator\n");

    // display choice
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    // ask for input
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // check choice condition, calcualte, and give output
    if (choice == 1) {
        printf("Enter the weight in kilograms: ");
        scanf("%lf", &kilograms);

        weight = kilograms * 2.2;
        printf("%.2lf kilograms is equal to %.2lf pounds.\n", kilograms, weight);
    }
    else if (choice == 2) {    
        printf("Enter the weight in pounds: ");
        scanf("%lf", &pounds);

        weight = pounds / 2.2;
        printf("%.2lf pounds is equal to %.2lf kilograms.\n", pounds, weight);
    }
    else {
        printf("Invalid input! Please enter 1 or 2.\n");
    }

    return 0;
}