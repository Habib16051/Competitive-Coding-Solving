#include<stdio.h>
// create a function to perform selection sort
void selection_sort(int arr[], int n)
{
    int i, j, min;

    // start a for loop to iterate the array to the last
    for(i=0;i<n-1;i++)
    {
        //find the minimum element in the unsorted part of the array
        min = i;

        for(int j = i+1; j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

    }
}

int main()
{
    int i,n;

    //Now take the length of the array
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];

    //now take the elements of the array
    printf("Enter the element of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr,n);

    // Print the new sorted array
    printf("Displaying the new sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
