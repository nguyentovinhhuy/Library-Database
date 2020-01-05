#include <stdio.h>
#include <stdlib.h>
#include "book_list.h"
#include "add_book.h"
#include "find_books.h"
#include "del_books.h"
#include "list_of_book.h"
#include "import.h"

void main_menu(){
    printf ("\t\tMAIN MENU\n");
    printf ("1. List of books\n");
    printf ("2. Add books\n");
    printf ("3. Delete books\n");
    printf ("4. Find books\n");
    printf ("5. Import data\n");
}

void decision(){
    int menu_decision;
    printf ("Please choose a number> ");
    scanf ("%d", &menu_decision);
    switch (menu_decision){
        case 1:
            show_list(list_of_book);
            break;
        case 2:
            add_book();
            break;
        case 3:
            del_book();
            break;
        case 4:
            find_book();
            break;
        case 5:
            import();
            break;
        default:
            break;
    }
}


