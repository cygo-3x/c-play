#include <stdio.h>

int main()
{
    // DISCOUNT CALCULATOR FOR STUDENTS AND SENIORS

    // declare variables
    int choice = 0;
    double discount = 0.0;
    double price = 10.00;
    int quantity = 0;

    printf("Discouted Bus Ticket Prices for Students and Seniors\n");

    // display message and choice
    printf("One ticket costs $10.00\n");
    printf("1. Student discount is 10%\n");
    printf("2. Senior discount is 20%\n");
    printf("3. If both, you receive 25%\n");

    // ask for input
    printf("What are you? Enter 1, 2, or 3: ");
    scanf("%d", &choice);

    // check choice, ask for input, calculate, and give output
    if (choice == 1) {
        printf("Enter ticket (s) quantity: ");
        scanf("%d", &quantity);
        discount = 10.00 / 100.00;
        discount = (price * quantity) - (discount * (price * quantity));
            
        printf("Congratualtions! You have received a student discount of 10%\n");
        printf("You have purchased %d ticket (s), and your total is: $%.2lf.\n", quantity, discount);
    }
    else if (choice == 2) {
        printf("Enter ticket (s) quantity: ");
        scanf("%d", &quantity);
        discount = 20.00 / 100.00;
        discount = (price * quantity) - (discount * (price * quantity));
            
        printf("Congratualtions! You have received a senior discount of 20%\n");
        printf("You have purchased %d ticket (s), and your total is: $%.2lf.\n", quantity, discount);
    }
    else if (choice == 3) {
        printf("Enter ticket (s) quantity: ");
        scanf("%d", &quantity);
        discount = 25.00 / 100.00;
        discount = (price * quantity) - (discount * (price * quantity));
        
        printf("Congratualtions! You have received a student and a senior discount of 25%\n");
        printf("You have purchased %d ticket (s), and your total is: $%.2lf.\n", quantity, discount);
    }
    else {
        printf("Invalid input! Please enter 1, 2, or 3.\n");
    }

    return 0;
}