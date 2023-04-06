#include <stdio.h>
#include <stdlib.h>

// Merge two sorted arrays into a single sorted array
void merge(int arr[], int left[], int left_size, int right[], int right_size) {
    int i = 0, j = 0, k = 0;

    // Merge the arrays by comparing elements from both arrays
    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the left array
    while (i < left_size) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy any remaining elements from the right array
    while (j < right_size) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Recursive function to sort an array using Merge Sort
void merge_sort(int arr[], int n) {
    if (n < 2) {
        return; // If the array has less than two elements, it is already sorted
    }

    int mid = n / 2;

    // Allocate memory for the left and right sub-arrays
    int* left = (int*)malloc(mid * sizeof(int));
    int* right = (int*)malloc((n - mid) * sizeof(int));

    // Copy the left half of the array into the left sub-array
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    // Copy the right half of the array into the right sub-array
    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }

    // Recursively sort the left and right sub-arrays
    merge_sort(left, mid);
    merge_sort(right, n - mid);

    // Merge the sorted left and right sub-arrays into the original array
    merge(arr, left, mid, right, n - mid);

    // Free the dynamically allocated memory
    free(left);
    free(right);
}

// Driver program to test the Merge Sort algorithm
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Merge Sort
    merge_sort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
