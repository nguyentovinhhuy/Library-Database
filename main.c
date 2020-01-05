#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Function.h"

int main()
{
    char operation_answer;
    do{
        main_menu();
        decision();
        printf ("\nDo you want to make another operation> ");
        fflush(stdin);
        scanf ("%c", &operation_answer);
        fflush(stdin);
    }while (operation_answer == 'Y' || operation_answer == 'y');
    return 0;
}
