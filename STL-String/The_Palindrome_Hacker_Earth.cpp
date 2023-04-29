#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        string temp = s;
        reverse(temp.begin(), temp.end());

        if(s==temp)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

}
