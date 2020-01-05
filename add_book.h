void add_book(){
    fflush(stdin);
    printf ("Enter the name of the book> ");
    gets(list_of_book[current_book].name);
    printf ("enter the release date of the book> ");
    fflush(stdin);
    gets(list_of_book[current_book].release_day);
    fflush(stdin);
    gets(list_of_book[current_book].release_month);
    fflush(stdin);
    gets(list_of_book[current_book].release_year);
    FILE *txt = fopen("book_list.txt", "a");
    fprintf(txt, "\n%s\n", list_of_book[current_book].name);
    fprintf(txt, "%s %s %s", list_of_book[current_book].release_day, list_of_book[current_book].release_month, list_of_book[current_book].release_year);
    current_book++;
    fflush(stdin);
}

