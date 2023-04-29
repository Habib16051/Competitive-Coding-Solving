#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n, int x)

{
    int left=0;
    int right = n-1; // the last most number
    while(left<=right){  // that means the element is exist in the file
        int mid = (left+right)/2;

        if(x==arr[mid])
            return mid;
        else if(x<arr[mid])
            right = mid-1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int n,x;

    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter an element that is to be searched: "<<endl;
    cin>>x;

    int index = BinarySearch(arr,n,x);

    if(index == -1)
        cout<<"Element not found in the array!!"<<endl;
    else
        cout<<"Element found at in index number: "<<index<<endl;
}
