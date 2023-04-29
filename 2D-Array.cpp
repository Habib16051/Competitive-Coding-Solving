#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][3], i, j, sum=0;
    cout<<"Enter the number of 2D Array: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"The Array is: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
            sum = sum + a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The sum of the 2D Array: "<<sum<<endl;
}
