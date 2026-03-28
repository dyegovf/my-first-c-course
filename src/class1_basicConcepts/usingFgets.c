#include <stdio.h>
#include "class1.h"

void usingFgets() {
    char name[20];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s\n", name);
}
