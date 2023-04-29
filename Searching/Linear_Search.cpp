#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {

        if(arr[i]==x) // check if the search value and the array value are same!
            return i;
    }
    return -1; // if not same return -1
}

int main()
{
    int n,x;

    cout<<"Enter the length of the array: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the element of the array: "<<endl;

    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: "<<endl;
    cin>>x;
    int index = LinearSearch(arr,n,x);

    if(index == -1)
        cout<<"Element is not found in the array!!"<<endl;
    else
        cout<<"Element found in index number: "<<index<<endl;
}
