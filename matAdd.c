#include <stdio.h>

void arrayReader(int row, int col, int arr[row][col]);
void arrayPrint(int row, int col, int arr[row][col]);

int main(void) {
    int r1, c1;
    printf("Enter the size of array: ");
    scanf("%d %d", &r1, &c1);

    //array 1 scan
    int arr1[r1][c1];
    int arr2[r1][c1];

    printf("Give elements of array 1:\n");
    arrayReader(r1, c1, arr1);
    printf("Give elements of array 2:\n");
    arrayReader(r1, c1, arr2);


    printf("Array 1:\n");
    arrayPrint(r1, c1, arr1);
    printf("Array 2:\n");
    arrayPrint(r1, c1, arr2);

    int arr[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Added array:\n");
    arrayPrint(r1, c1, arr);


    return 0;
} 

void arrayReader(int row, int col, int arr[row][col]) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%dth element of %dth row: ", j, i);
            scanf("%d", &arr[i][j]);
        }
    }
}

void arrayPrint(int row, int col, int arr[row][col]) {
    for (int i = 0; i < row; i++ ) {
        for (int j = 0; j < col; j++) {
            printf("%.2d ", arr[i][j]);
        }
        printf("\n");
    }
}