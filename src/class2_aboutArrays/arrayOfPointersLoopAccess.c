#include <stdio.h>
#include "class2.h"

void arrayOfPointersLoopAccess() {
    char *words[] = {"Hello", "World", "!"};
    int size = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < size; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}
