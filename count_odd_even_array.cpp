#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10], i;
    int odd = 0, even = 0;

    cout<<"Enter the number of array: "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    cout<<"The number of even elements are: "<<even<<endl;
    cout<<"The number of odd elements are: "<<odd<<endl;
}

