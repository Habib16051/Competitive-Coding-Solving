#include <stdio.h>

int main() {
    int arr[100], size, pos, value;

    // Get the size of the array from user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get the array elements from user
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position and value from user
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value you want to insert: ");
    scanf("%d", &value);

    // Check if the user wants to insert at the beginning of the array
    if(pos == 1) {
        for(int i = size - 1; i >= 0; i--) {
            arr[i+1] = arr[i];
        }
        arr[0] = value;
        size++;
    }
    // Check if the user wants to insert at the end of the array
    else if(pos == size + 1) {
        arr[size] = value;
        size++;
    }
    // Insert at the specified position
    else if(pos > 1 && pos <= size) {
        for(int i = size - 1; i >= pos - 1; i--) {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = value;
        size++;
    }
    // Invalid position
    else {
        printf("Invalid position.\n");
        return 1;
    }

    // Print the new array
    printf("New array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

