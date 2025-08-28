#include <stdio.h>

// CODE INCOMPLETE! IT IS RESTRUCTURED. I WILL TRY TO COMPLETE IT AFTER GYM

void getResponses(int maxUsers, int *userCount, double *totalPoints);
double calculateAverage(double totalPoints, int userCount);
void displayResult(double average, int userCount);

int main()
{
    // 5-POINT LIKERT SCALE

    // declare and initialize variables
    int userCount = 0;
    double totalPoints = 0.0;
    int maxUsers = 100; // or any number you want to survey

    printf("5-Point Likert Scale Program\n");

    // display choice (points)
    printf("1. Strongly Agree\n");
    printf("2. Agree\n");
    printf("3. Neutral\n");
    printf("4. Disagree\n");
    printf("5. Strongly Disagree\n\n");

    // call functions
    getResponses(maxUsers, &userCount, &totalPoints);
    double average = calculateAverage(totalPoints, userCount);
    displayResult(average, userCount);

    return 0;
}

// input (data) collection function
void getResponses(int maxUsers, int *userCount, double *totalPoints)
{

}

// average function
double calculateAverage(double totalPoints, int userCount)
{

}

// result (s) function
void displayResult(double average, int userCount)
{

}