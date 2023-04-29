#include<stdio.h>
int main()
{
    int i,j,n, temp;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];
    // Get input from the user
    printf("Enter the elements into the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    // main logic of insertion sort algorithm
    for(i = 1; i<n; i++)
    {
        temp = arr[i];
        j = i-1;

        // move elements to the right to make space for the insertion

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        // insert the current element in the correct position
        arr[j+1] = temp;
    }

    //print the sorted array

    printf("Displaying the sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
