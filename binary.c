#include <stdio.h>

int main(void) {
    
    int n;
    printf("Give size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Give array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Give target: ");
    scanf("%d", &target);

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        
        mid = (low + high) / 2;
        if (arr[mid] == target ) {
            printf("Element found at %d\n", mid + 1);
            return 0;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found in the array\n");
    return -1;

}