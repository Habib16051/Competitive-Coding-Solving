#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5,4,10,12,3};

    sort(arr, arr+5);

    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
