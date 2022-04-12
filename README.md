# calculator
Simple Addition/Subtraction Calculator

// Header file which has the information to include the inout/output realted functions.

    #include <stdio.h>

// printf("Enter first integer: "); is a function to put out a prompting message.

// Void Enterfirstinteger(char* First) is creating a user defined function to create control over varibles

    void Enterfirstinteger(char* First) {
    printf("Enter First Integer: ");
    }

// Enter second integer is asking for the second part of the math question.

    void Entersecondinteger(char* Second) {
    printf("Enter Second Integer: ");
    }
// This part is asking the user if they want to "Add or Subtract"

    void Add1Subtract2(char* Third) {
    printf("\nAdd(1), Subtract(2): ");
    }

// printf("\nAgain (Y/N): "); is the loop function to allow the user to ask another question.

    void Again(char* Fourth) {
    printf("\nAgain (Y/N): ");
    }

// int main represents that the function returns some integer even "0" at the end of the program.

    int main()
    {

// "char" stores a single character and an "int is a varible used to store an integer.
    
    char yes;
    int a, b, c, choice;

// Giving a user a choice to pick
  
     yes = 'y';
    while (yes == 'y' || yes == 'Y')
    {
// char* First = "Enter First Number"; is a varible that is being controlled by the user defined function.
        
        char* First = "Enter First Number";
        Enterfirstinteger(First);

        scanf_s(" %d", &a);
// This is the second varible being controlled by the user defined function.
        
        char* Second = "Enter Second Number";
        Entersecondinteger(Second);

        scanf_s(" %d", &b);
// This is the third varible controlled by the user defined function.
        
        char* Third = "\nAdd(1), Subtract(2):";
        Add1Subtract2(Third);

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

        char* Fourth = "Again";
        Again(Fourth);

        scanf_s(" %c", &yes);
    }
// return 0; means that the program will execute successfully and did what it was intended to do. 
    
    return 0;
}
