#include "Array.h"
#include <stdio.h>
#include <stdlib.h>


int* array(int *size) {

    printf("Enter the size of array: ");
    scanf("%d", size);

    int* arr = malloc(*size * sizeof(int)); // stays on heap by the use of malloc   
    printf("Enter the elements of array: ");
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}

void arrayPrint(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}