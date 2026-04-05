#include <stdio.h>
#include "class8.h"

void printPointers(int age, double gpa, char grade) {

    int *agePtr = &age;
    double *gpaPtr = &gpa;
    char *gradePtr = &grade;

    printf("Pointer Age: %p\n", (void*)agePtr);
    printf("Pointer GPA: %p\n", (void*)gpaPtr);
    printf("Pointer Grade: %p\n", (void*)gradePtr);
}