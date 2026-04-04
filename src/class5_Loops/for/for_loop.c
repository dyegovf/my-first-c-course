#include <stdio.h>
#include "class5_for.h"

void forLoop(int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Iteration %d\n", i + 1);
    }
}