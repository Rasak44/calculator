#include <stdio.h>

int EnterFirstinteger(char* msg)
{
    int a;
    printf(msg);
    scanf_s(" %d", &a);
    return a;
}
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
    char yes;
    int a, b, c, choice, again;

    yes = 'y';
    while (yes == 'y' || yes == 'Y')
    {
        int main();
        char* First = "First Integer: ";
        printf("Please Enter First Number\n");
        a = EnterFirstinteger(First);
        printf("\nCalculating...\n");

        char* Second = "Second Integer: ";
        printf("\nPlease Enter Second Number\n");
        b = EnterSecondinteger(Second);
        printf("\nCalculating...\n");

        char* Third = "Add(1), Subtract(2):\n";
        printf("\nPlease Enter (1) for Addition OR Please Enter (2) for Subtraction!\n");
        c = Add1Subtract2(Third);
        printf("\nFinal choice Press 1 for Addition or 2 for Subtraction and Press Enter!\n");

        scanf_s(" %d", & choice);

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
    return 0;
}
