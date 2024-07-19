#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b)
{
    return (*(int *)a -*(int *)b);
}

int *sortedSquares(const int *arr,int numsSize)
{
    int *sortedArr =(int*)malloc(numsSize*sizeof(int));
    if(sortedArr==NULL)
    {
        perror("Memory allaocoation failed\n");
        exit(1);
    }

     // Copy the original array to the sorted array
    for (int i = 0; i < numsSize; i++) {
        sortedArr[i] = arr[i]*arr[i];
    }

     // Use the qsort function from the C standard library to sort the array
    qsort(sortedArr, numsSize, sizeof(int), compare);

    return sortedArr;
}

int main() {
    int arr[] = {-4, 3, -2, -12, -10, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int* sortedArray = sortedSquares(arr, n);

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