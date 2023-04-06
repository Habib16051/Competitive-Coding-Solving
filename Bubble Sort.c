#include<stdio.h>
void bubble_sort(int arr[], int n)
{
    int i, j, temp;

    // start a for loop for count the total pass of the bubble sort
    for(i=0;i<n-1;i++)
    {
        // now continue a for loop to count the unsorted part /
        //compare among the elements
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int i, n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    //create an array of length to store the elements
    int arr[n];

    // take the elements of the array from the user
    printf("Enter the elements of the array: ");
    for( i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    // Call the bubble sort function to sort the array
    bubble_sort(arr, n);

    printf("Displaying the sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
