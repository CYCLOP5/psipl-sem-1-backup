#include <stdio.h>

int main() {
    FILE *main_file, *paperback_books_file, *hardback_books_file;
    char record[100];

    main_file = fopen("input.txt", "r");
    if (main_file == NULL) 
    {
        printf("Error opening main book file\n");
        return 1;
    }

    paperback_books_file = fopen("paperbacks.txt", "w");
    if (paperback_books_file == NULL) 
    {
        printf("Error opening paperback book file\n");
        return 1;
    }

    hardback_books_file = fopen("hardbacks.txt", "w");
    if (hardback_books_file == NULL) 
    {
        printf("Error opening hardback book file\n");
        return 1;
    }

    while (fgets(record, sizeof(record), main_file)) 
    {
        if (record[0] == 'p') 
        {
            fputs(record, paperback_books_file);
        } 
        else if (record[0] == 'h') 
        {
            fputs(record, hardback_books_file);
        }
        /**else if (record[0] == 'b')
        {
            fputs(record, paperba   ck_books_file);
            fputs(record, hardback_books_file);
        }*/                   //question does not state what to do with books that are both hardback and paperback
    }

    fclose(main_file);
    fclose(paperback_books_file);
    fclose(hardback_books_file);

    return 0;
}
