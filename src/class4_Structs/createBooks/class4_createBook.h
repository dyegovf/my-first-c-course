#ifndef CLASS4_CREATEBOOK_H
#define CLASS4_CREATEBOOK_H

struct createBook {
    char title[100];
    char author[50];
    int year;
    char genre[30];
};

void printBook (struct createBook Book[], int qtd);
void filterBook (struct createBook Book[], int qtd, int year);

#endif