#include <stdio.h>
#include <string.h>

int main()
{
    // SIMPLE LOGIN PROGRAM -- version 1

    // declare variables
    char user[50] = "";
    char username[50] = "";
    char password[50] = "";
    
    // dispaly the choices
    printf("Registered users on this PC\n");
    printf("1. CYGO\n");
    printf("2. COSTA\n");

    // ask for input
    printf("Enter your name: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';

    // LOGIN FOR CYGO
    // check user condition
    if (strcmp(user, "CYGO") == 0) {
        // login credentials for user
        strcpy(username, "cygo_3x");
        strcpy(password, "cygo/Pass3");

        // display message
        printf("Welcome back CYGO!\n");

        // ask for input
        printf("Enter your username: ");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';

        // check username condition
        if (strcmp(username, "cygo_3x") == 0) {
            printf("Enter your password: ");
            fgets(password, sizeof(password), stdin);
            password[strcspn(password, "\n")] = '\0';

            // check password condition
            if (strcmp(password, "cygo/Pass3") == 0) {
                printf("Access granted!\n");
            } else {
                printf("Incorrect password!\n");
            }
        } else {
            printf("Invalid username!\n");
        }
    }
    
    // LOGIN FOR COSTA
    // check user condition
    else if (strcmp(user, "COSTA") == 0) {
        // login credentials for user
        strcpy(username, "costa_1x");
        strcpy(password, "costa/Pass1");

        // display message
        printf("Welcome back COSTA!\n");

        // ask for input
        printf("Enter your username: ");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';

        // check username condition
        if (strcmp(username, "costa_1x") == 0) {
            printf("Enter your password: ");
            fgets(password, sizeof(password), stdin);
            password[strcspn(password, "\n")] = '\0';

            // check password condition
            if (strcmp(password, "costa/Pass1") == 0) {
                printf("Access granted!\n");
            } else {
                printf("Incorrect password!\n");
            }
        } else {
            printf("Invalid username!\n");
        }
    } else {
        printf("User not recognized!\n");
    }

    return 0;
}