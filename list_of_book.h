void swap_string (char** x, char** y){
    char* temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_book (struct book* book_1, struct book* book_2){
    swap_string (&(book_1 -> name), &(book_2 -> name));
    swap_string (&book_1 -> release_day, &book_2 -> release_day);
    swap_string (&book_1 -> release_month, &book_2 -> release_month);
    swap_string (&book_1 -> release_year, &book_2 -> release_year);
}

void alphabet_pass(struct book list_of_book[], int current_size){
    int i = 0;
    int temp1, temp2;
    for (i = 0; i < current_size - 1; i++){
        temp1 = (list_of_book[i].name[0] - 'A') * 26 + list_of_book[i].name[1] - 'a';
        temp2 = (list_of_book[i + 1].name[0] - 'A') * 26 + list_of_book[i + 1].name[1] - 'a';
        if (temp1 > temp2){
            swap_book (list_of_book + i, list_of_book + i + 1);
        }
    }
}
void sort_by_alphabet(struct book list_of_book[], int current_book){
    int i = current_book - 1;
    for (i = current_book - 1; i > 0; i--){
        alphabet_pass(list_of_book, i);
    }
}

void show_list(struct book list_of_book[]){
    int i = 1;
    while (i <= current_book){
        printf ("%d.\t%s\n", i, list_of_book[i - 1].name);
        i++;
    }
    printf ("do you want to sort by alphabet> ");
    fflush(stdin);
    char sort_option;
    scanf ("%c", &sort_option);
    if (sort_option == 'y' || sort_option == 'Y'){
        sort_by_alphabet(list_of_book, current_book);
    }
    fflush(stdin);
}

