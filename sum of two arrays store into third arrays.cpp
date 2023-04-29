#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5], b[5], c[5],i;

    cout<<"Enter the 1st and 2nd array: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<5;i++)
    {
        cin>>b[i];

    }
    cout<<"Sum every element from both of the array and store it to third array: "<<endl;
    for(i=0;i<5;i++)
    {
        c[i] = a[i] + b[i];
        cout<<"Here is the new third array: "<<c[i]<<endl;
    }

}
