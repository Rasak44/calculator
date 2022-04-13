#include <stdio.h>

int Enterfirstinteger() {
    int a;
    printf("Enter First Integer: ");
    scanf(" %d", &a);
    return a;
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
        printf("About to call function\n");
        printf("I got a as %d", a);
        a = Enterfirstinteger();
        printf("Back from function\n");
        printf("I got a as %d", a);



        char* Second = "Enter Second Number";
        Entersecondinteger(Second);
        scanf(" %d", &b);

        char* Third = "\nAdd(1), Subtract(2):";
        Add1Subtract2(Third);

        scanf(" %d", &choice);

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

        scanf(" %c", &yes);
    }
    return 0;
}
