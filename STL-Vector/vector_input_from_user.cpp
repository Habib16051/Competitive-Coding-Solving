#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n;i++)
    {
        int a;

        cin>>a;
        v.push_back(a);
    }
    cout<<"Your expected array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
