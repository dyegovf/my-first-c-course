#include <stdio.h>
#include "class2.h"

void arrayOfPointersDirectAccess() {
    char *words[] = {"Hello", "World", "!"};
    printf("%c", words[0][0]);
    printf(" %s", words[1]);
    printf(" %s\n", words[2]);
}
