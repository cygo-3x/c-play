#include <stdio.h>
#include <math.h>

int main()
{
    // CIRCLE CALCULATOR

    // declare variables
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double Pi = 3.14159;

    printf("Circle Calculator\n");

    // ask for input
    printf("Enter the radius: ");
    scanf("%lf", &radius);

    /* calculate: area; surface area; volume
        and give output (answer)
    */
    area = Pi * pow(radius, 2);
    printf("Area: %.2lf\n", area);

    surfaceArea = 4.0 * area;
    printf("Surface Area: %.2lf\n", surfaceArea);

    volume = (4.0 / 3.0) * Pi * pow(radius, 3);
    printf("Volume: %.2lf\n", volume);

    return 0;
}