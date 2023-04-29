#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][3], i, j;

    cout<<"Enter the element of the array: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The new transpose matrix is: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<a[j][i];
        }
        cout<<endl;
    }

}
