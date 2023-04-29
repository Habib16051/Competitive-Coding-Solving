#include<bits/stdc++.h>
using namespace std;

// Partition function to divide the array based on a pivot element
int Qpartitions(vector<int>&arr, int low, int high)
{
    // Choose the first element as the pivot
    int pivot = arr[low];

    int i = low;
    int j = high;

    // Keep moving the left and right pointers towards each other
    while(i<j)
    {
        // Move the left pointer until we find an element greater than the pivot
        while(arr[i]<=pivot) i++;

        // Move the right pointer until we find an element less than or equal to the pivot
        while(arr[j]>pivot) j--;

        // Swap the left and right elements if they are on opposite sides of the pivot
        if(i<j)
            swap(arr[i],arr[j]);

    }

    // Move the pivot to its final position in the array
    swap(arr[j], arr[low]);

    // Return the index of the pivot
    return j;
}

// Quicksort function to recursively sort the array
void quicksort(vector<int>&arr, int low, int high)
{
    // If there is more than one element in the array
    if(low<high){
        // Partition the array based on a pivot element
        int pivot = Qpartitions(arr, low, high);

        // Recursively sort the left and right subarrays
        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}

int main()
{
    // Initialize the input array
    vector<int> arr = {7,8,2,1,10,15,20,3};
    int n = arr.size();

    // Set the initial values for low and high
    int low = 0;
    int high = n-1;

    // Sort the array using quicksort
    quicksort(arr, low, high);

    // Print the sorted array
    cout<<"Sorted Array: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
