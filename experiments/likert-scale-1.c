#include <stdio.h>

// declare definition functions as prototypes
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

    // survey heading
    printf("Impact of Class Attendance on Grades Survey\n\n");

    // display choice (points)
    printf("1. Strongly Disagree\n");
    printf("2. Disagree\n");
    printf("3. Neutral\n");
    printf("4. Agree\n");
    printf("5. Strongly Agree\n\n");

    // call functions
    getResponses(maxUsers, &userCount, &totalPoints);
    double average = calculateAverage(totalPoints, userCount);
    displayResult(average, userCount);

    return 0;
}

// input (data) collection function
void getResponses(int maxUsers, int *userCount, double *totalPoints)
{
    int i;

    // check iteration condition
    for (i = 1; i <= maxUsers; i++) {
        double point = 0.0;

        while (1) {
            // display statement and ask for input
            printf("Class Attendance = Better Marks\n");
            printf("User %d: Select your point (1-5) or 0 to exit: ", i);
            scanf("%lf", &point);

            // check exit condition
            if (point == 0) {
                char choice = '\0';

                // display warning message and ask for confirmation to exit
                printf("You have selected: %.lf\n", point);
                printf("You are about to stop the survey!!!\n");
                printf("Are you sure? Enter Y if YES or N if NO: ");
                scanf(" %c", &choice); // space before %c handles newline

                if (choice == 'Y' || choice == 'y') {
                    printf("Survey ended early by user.\n\n");
                    return; // exits the function early
                } else {
                    printf("Resuming survey...\n\n");
                    continue; // ask for input again
                }
            }

            if (point >= 1 && point <= 5) {
                printf("You have selected: %.lf\n\n", point);
                *totalPoints += point;
                (*userCount)++;
                break; // exit the while loop only when input is valid
            } else {
                printf("%.lf is an invalid input! Please enter a number between 1 and 5, or 0 to exit.\n\n", point);
            }
        }
    }
}

// average function
double calculateAverage(double totalPoints, int userCount)
{
    if (userCount > 0) {
        return totalPoints / userCount;
    } else {
        return 0.0; // to avoid dividing by zero
    }
}

// results function
void displayResult(double average, int userCount)
{
    // display the results
    printf("------ Survey Summary ------\n");
    printf("Total Participants: %d\n", userCount);
    printf("Average Rating: %.2lf\n", average);

    // interpret the average
    if (average >= 4.5)
        printf("Overall Opinion: Strongly Agree\n");
    else if (average >= 3.5)
        printf("Overall Opinion: Agree\n");
    else if (average >= 2.5)
        printf("Overall Opinion: Neutral\n");
    else if (average >= 1.5)
        printf("Overall Opinion: Disagree\n");
    else
        printf("Overall Opinion: Strongly Disagree\n");
}
