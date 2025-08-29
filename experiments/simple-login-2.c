#include <stdio.h>
#include <string.h>

int main()
{
    // SIMPLE LOGIN PROGRAM -- version 2

    // Input variables
    char user[50];
    char input_username[50];
    char input_password[50];

    // Account credentials
    const char *valid_users[] = {"CYGO", "COSTA"};
    const char *usernames[]   = {"cygo_3x", "costa_1x"};
    const char *passwords[]   = {"cygo/Pass3", "costa/Pass1"};

    int user_index = -1;

    // Display choices
    printf("Registered users on this PC\n");
    printf("1. CYGO\n");
    printf("2. COSTA\n");

    // Ask for name
    printf("Enter your name: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0'; // remove newline

    // Find user index
    for (int i = 0; i < 2; i++) {
        if (strcmp(user, valid_users[i]) == 0) {
            user_index = i;
            break;
        }
    }

    // If user is recognized
    if (user_index != -1) {
        printf("Welcome back %s!\n", user);

        printf("Enter your username: ");
        fgets(input_username, sizeof(input_username), stdin);
        input_username[strcspn(input_username, "\n")] = '\0';

        if (strcmp(input_username, usernames[user_index]) == 0) {
            printf("Enter your password: ");
            fgets(input_password, sizeof(input_password), stdin);
            input_password[strcspn(input_password, "\n")] = '\0';

            if (strcmp(input_password, passwords[user_index]) == 0) {
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
