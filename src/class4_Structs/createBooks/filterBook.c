#include <stdio.h>
#include "class4_createBook.h"

void filterBook (struct createBook Book[], int qtd, int year) {
    printf("Books of %d:\n", year);
    printf("-------------------------\n");
    for (int i = 0; i < qtd; i++) {
        if (Book[i].year > year) {
            printf("Title: %s\n", Book[i].title);
            printf("Author: %s\n", Book[i].author);
            printf("Genre: %s\n", Book[i].genre);
            printf("-------------------------\n");

        };
    };
};