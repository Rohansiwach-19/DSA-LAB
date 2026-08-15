#include <stdio.h>

int main(void) {
    int n;
    printf("Give array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Give array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Give target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (target == arr[i]) {
            printf("Element found at %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    return -1;

}