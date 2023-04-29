#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>cnt;
    while(n--)
    {
        string s;
        cin>>s;
        if(cnt[s]==0)
            cout<<"OK\n";
        else
        {
            cout<<s<<cnt[s]<<endl;
        }
        cnt[s]++;
    }
}
