#include <stdio.h>
#include "Array.h"
#include <stdlib.h>

void insert(int* arr, int size, int index, int value);

int main(void) {
    int n;
    int *arr = array(&n); // from array.h

    int index;
    int value;

    // array before insertion
    arrayPrint(arr, n);

    insert(arr, n, index, value);

    // array after insertion
    arrayPrint(arr, n + 1); // from array.h

    free(arr);
    return 0;   
}

void insert(int* arr, int size, int index, int value) {
    printf("Print the position of insertion: ");
    scanf("%d", &index);
    printf("Give the value to insert: ");
    scanf("%d", &value);

    arr = realloc(arr, (size + 1) * sizeof(int));
    for (int i = size; i >= index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = value;
}
// this program assumes that capacity of array is already full which is not always the case.
