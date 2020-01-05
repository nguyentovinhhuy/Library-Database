void show_book(struct book sample){
    printf ("\nName: %s\n", sample.name);
    printf ("Release date: %s - %s - %s\n", sample.release_day, sample.release_month, sample.release_year);
}

void find_book_by_index(){
    int target;
    fflush(stdin);
    printf ("enter the index number> ");
    scanf ("%d", &target);
    show_book(list_of_book[target - 1]);
    fflush(stdin);
}

void find_by_alphabet(){
    char* word = malloc(2 * sizeof(char));
    printf ("Enter two characters> ");
    scanf ("%s", word);
    int value = (*word) * 26 + (*(word + 1));
    int temp;
    int i = 0;
    int j = 1;
    while (i < current_book){
        temp = (list_of_book[i].name[0]) * 26 + (list_of_book[i].name[1]);
        if (temp == value){
            printf ("%d.\t%s\n", j++, list_of_book[i].name);
        }
        i++;
    }
}

void find_book(){
    printf ("\nFind by\n");
    printf ("1. Index\n");
    printf ("2. Name\n");
    int i;
    printf ("Enter your option> ");
    scanf ("%d", &i);
    switch (i){
        case 1:
            fflush(stdin);
            find_book_by_index();
            fflush(stdin);
            break;
        case 2:
            fflush(stdin);
            find_by_alphabet();
            fflush(stdin);
            break;
        default:
            break;
    }
}
