#include <stdio.h>
#include "class4_createBook.h"

void printBook (struct createBook Book[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("- Title: %s\n", Book[i].title);
        printf("- Author: %s\n", Book[i].author);
        printf("- Year: %d\n", Book[i].year);
        printf("- Genre: %s\n", Book[i].genre);
        printf("-----------------------\n");
    };
};
