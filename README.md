# calculator
Simple Addition/Subtraction Calculator

// Header file which has the information to include the inout/output realted functions.
// Building of new structures upon code building unions.
        
    #include <stdio.h>

    int EnterFirstinteger(char* msg)
    {
    int a;
    printf(msg);
    scanf_s(" %d", &a);
    return a;
    }

// int new structures upon code. 

    int EnterSecondinteger(char* msg)
    {
    int b;
    printf(msg);
    scanf_s(" %d", &b);
    return b;
    }
    int Add1Subtract2(char* msg)
    {
    int c;
    printf(msg);
    scanf_s(" %d", &c);
    return c;
    }
    int Again(char* msg)
    {
    int again;
    printf(msg);
    scanf_s(" %d", &again);
    return again;
    }
    int main()
    {
// "char" stores a single character and an "int is a varible used to store an integer.
   
    char yes;
    int a, b, c, choice, again;

    yes = 'y';
    while (yes == 'y' || yes == 'Y')
    {
// int main represents that the function returns some integer even "0" at the end of the program.

        int main();
        char* First = "First Integer: ";
        printf("Please Enter First Number\n");
        a = EnterFirstinteger(First);
        printf("\nCalculating...\n");
        
// char* First = "Enter First Number"; is a varible that is being controlled by the user defined function.

        char* Second = "Second Integer: ";
        printf("\nPlease Enter Second Number\n");
        b = EnterSecondinteger(Second);
        printf("\nCalculating...\n");
        
// This is the second varible being controlled by the user defined function.

        char* Third = "Add(1), Subtract(2):\n";
        printf("\nPlease Enter (1) for Addition OR Please Enter (2) for Subtraction!\n");
        c = Add1Subtract2(Third);
        printf("\nFinal choice Press 1 for Addition or 2 for Subtraction and Press Enter!\n");
        
// This is the third varible controlled by the user defined function

        scanf_s(" %d", & choice);
        
// This segment is where the program will show the answer to the math question.
// "Switch" is an alternate to if-else-if lader statement which allows to execute multiple operations for different possibles of values of a single varible. 

        switch (choice)
        {
        case(1):
            c = a + b;
            printf("\n%d + %d = %d\n", a, b, c);
            break;
        case(2):
            c = a - b;
            printf("\n%d - %d = %d\n", a, b, c);
            break;

        }

        char* Fourth = "Y or N?";
        printf("\nWould you want to Enter another Calculation?\n");
        again = Again(Fourth);
        printf("\n");

        scanf_s(" %c", &yes);
        
        printf("\n");
    }
// return 0; means that the program will execute successfully and did what it was intended to do. 

        return 0;
}
