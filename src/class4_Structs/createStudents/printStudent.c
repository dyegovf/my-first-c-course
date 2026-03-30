#include <stdio.h>
#include "class4_createStudent.h"

void printStudent(struct createStudent Student[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Name: %s\n", Student[i].name);
        printf("Age: %d\n", Student[i].age);
        printf("Major: %s\n", Student[i].major);
        printf("GPA: %.2f\n", Student[i].gpa);
        printf("-----------------------\n");
    }
}