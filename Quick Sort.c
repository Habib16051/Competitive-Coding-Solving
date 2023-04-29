#include <stdio.h>

// A function to swap two elements in an array
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// A function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1; // Initialize the index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr, i, j); // Swap arr[i] and arr[j]
        }
    }
    swap(arr, i + 1, high); // Swap arr[i+1] and arr[high], place pivot at correct position
    return i + 1; // Return the pivot index
}

// The main recursive function that implements quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition the array around pivot
        quickSort(arr, low, pi - 1); // Recursively sort elements before pivot
        quickSort(arr, pi + 1, high); // Recursively sort elements after pivot
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1); // Sort the array

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
