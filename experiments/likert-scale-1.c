#include <stdio.h>

// CODE INCOMPLETE! I WILL COMPLETE IT TOMORROW AFTER MY SOFTWARE SUPPORT TEST

double likertScale();

int main()
{
    // 5-POINT LIKERT SCALE
    printf("5-Point Likert Scale Program\n");

    // display choice (points)
    printf("1. Strongly Agree\n");
    printf("2. Agree\n");
    printf("3. Neutral\n");
    printf("4. Disagree\n");
    printf("5. Strongly Disagree\n");
    printf("\n");

    likertScale();
    return 0;
}

// 5-point likert scale function
double likertScale()
{
    int i;
    double point = 0.0;

    for (i = 1; i <= 4; i++) {
        do {
            // Ask user for input
            printf("Class Attendance = Better Marks?\n");
            printf("No %d: Select your point (1-5): ", i);
            scanf("%lf", &point);

            // Validate input
            if (point < 1 || point > 5) {
                printf("Invalid input! Please enter a number between 1 and 5.\n\n");
            }
        } while (point < 1 || point > 5); // Repeat until valid input
    }

    return point;
}

// average function