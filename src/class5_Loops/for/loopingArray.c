#include <stdio.h>
#include "class5_for.h"

void loopingArray(int arr[], int size) {
    printf("Looping through the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
}