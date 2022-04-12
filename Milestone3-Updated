#include <stdio.h>

void Enterfirstinteger(char* First) {
    printf("Enter First Integer: ");
}

void Entersecondinteger(char* Second) {
    printf("Enter Second Integer: ");
}

void Add1Subtract2(char* Third) {
    printf("\nAdd(1), Subtract(2): ");
}

void Again(char* Fourth) {
    printf("\nAgain (Y/N): ");
}


int main()
{
    char yes;
    int a, b, c, choice;

    yes = 'y';
    while (yes == 'y' || yes == 'Y')
    {
        
        char* First = "Enter First Number";
        Enterfirstinteger(First);

        scanf_s(" %d", &a);

        char* Second = "Enter Second Number";
        Entersecondinteger(Second);

        scanf_s(" %d", &b);

        char* Third = "\nAdd(1), Subtract(2):";
        Add1Subtract2(Third);

        scanf_s(" %d", &choice);

        printf("\n");

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
    return 0;
}
