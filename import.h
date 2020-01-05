void import(){
    FILE *txt;
    txt = fopen("book_list.txt", "r");
    while (!feof(txt)){
        fflush(stdin);
        fgets(list_of_book[current_book].name, 50, (FILE*)txt);
        fgets(list_of_book[current_book].release_day, 4, (FILE*)txt);
        fgets(list_of_book[current_book].release_month, 4, (FILE*)txt);
        fgets(list_of_book[current_book].release_year, 10, (FILE*)txt);
        current_book++;
    }
    fflush(stdin);
    printf ("\nImport Complete\n");
}
