#include <stdio.h>
#include <math.h>

int main()
{
    // COMPOUND INTEREST CALCULATOR

    // declare variables
    double principal = 0.0;
    double interest = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0;

    printf("Compound Interest Calculator\n");

    // ask for input
    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interet rate % (r): ");
    scanf("%lf", &interest);
    interest = interest / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    // calculate the input data
    total = principal * pow(1 + (interest / timesCompounded), (timesCompounded * years));

    // give output
    printf("After 2 years, the total will be $%.2lf.\n", total);

    return 0;
}