#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&arr, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;    // Initialize temporary array index
    int b[right-left+1];   // Create temporary array to store sorted subarray

    // Traverse both the halves of the array and merge them in sorted order
    while(i <= mid && j <= right)
    {
        if(arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left subarray into the temporary array
    while(i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right subarray into the temporary array
    while(j <= right)
    {
        b[k] = arr[j];
        j++;
        k++;
    }

    // Copy the elements of temporary array back to the original array
    for(k = 0; k < right-left+1; k++)
    {
        arr[left+k] = b[k];
    }
}

void MergeSort(vector<int>&arr, int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(arr, left, mid);          // Sort left sub-array
        MergeSort(arr, mid + 1, right);     // Sort right sub-array
        Merge(arr, left, mid, right);       // Merge the sorted sub-arrays
    }
}

int main()
{
    vector<int> arr = {7, 8, 2, 1, 10, 15, 20, 3};
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    MergeSort(arr, left, right);

    cout<<"Sorted Array: "<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
