#include <stdio.h>
#include <stdlib.h>

int *sortedSquares(int *A, int ASize, int *returnSize) {
    int *result = malloc(sizeof(int) * (*returnSize = ASize)), *p = A, *q = A + ASize - 1;
    int index = ASize - 1;
    while (p <= q) {
        *p = *p > 0 ? *p : *p * -1;
        *q = *q > 0 ? *q : *q * -1;
        if (*p >= *q) {
            result[index--] = *p * (*p);
            p++;
        } else {
            result[index--] = *q * (*q);
            q--;
        }
    }
    return result;
}

int main() {
    int arr[] = {-4, 3, -2, -12, -10, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int returnSize =0; 
    int *sortedArray= sortedSquares(arr, n,&returnSize);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedArray[i]);
    }

    // Don't forget to free the dynamically allocated memory
    free(sortedArray);

    return 0;
}