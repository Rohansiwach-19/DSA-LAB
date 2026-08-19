#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main(void) {
    int n, m;
    int* arr1 = array(&n);
    int* arr2 = array(&m);

    int* arrMerge = malloc((n + m) * sizeof(int));
    for (int i = 0; i < n; i++) {
        arrMerge[i] = arr1[i];
    }
    for (int i = n; i < (n + m); i++) {
        arrMerge[i] = arr2[i - n];
    }

    arrayPrint(arrMerge, n+m);
    
}

