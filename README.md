# calculator
Simple Addition/Subtraction Calculator

// Header file which has the information to include the inout/output realted functions.

#include <stdio.h>

// int main represents that the function returns some integer even "0" at the end of the program.

int main()
{

// "char" stores a single character and an "int is a varible used to store an integer. 

    char yes;
    int a, b, c, choice;

// Giving a user a choice to pick.

    yes = 'y';
    while (yes == 'y' || yes == 'Y')
    {

// printf("Enter first integer: "); is a function to put out a prompting message.
        
        printf("Enter first integer: ");

// scanf_s(" %d", &a); is asking the function to read the user input from the keyboard and store the value into a varible integer. 
        
        scanf_s(" %d", &a);

// Enter second integer is asking for the second part of the math question. 
 
        printf("Enter second integer: ");
        scanf_s(" %d", &b);

// This part is asking the user if they want to "Add or Subtract".

        printf("\nAdd(1), Subtract(2): ");
        scanf_s(" %d", &choice);

// This segment is where the program will show the answer to the math question.

        printf("\n");

// "Switch" is an alternate to if-else-if lader statement which allows to execute multiple operations for different possibles of values of a single varible. 

        switch (choice)
        {
        case(1):
            c = a + b;
            printf("%d + %d = %d\n", a, b, c);
            break;
        case(2):
            c = a - b;
            printf("%d - %d = %d\n", a, b, c);
            break;
        }

// printf("\nAgain (Y/N): "); is the loop function to allow the user to ask another question.

        printf("\nAgain (Y/N): ");
        scanf_s(" %c", &yes);
    }

// return 0; means that the program will execute successfully and did what it was intended to do. 

    return 0;
}
