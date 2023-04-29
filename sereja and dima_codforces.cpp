#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    vector<int> v(n);
    int s=0,d=0,f1=1;

    for(int i=0;i<n;i++)cin>>v[i];

    while(!v.empty())
        if(f1==1)
        {
            if(v[0]>v.back())
            {
                s+=v[0];
                v.erase(v.begin());
            }
            else{
                s+=v.back();
                v.pop_back();
            }
            f1=2;
        }
        else
        {
            if(v[0]>v.back())
            {
                d+=v[0];
                v.erase(v.begin());
            }
            else
            {
                d+=v.back();
                v.pop_back();
            }
            f1=1;
        }
        cout<<s<<" "<<d<<endl;
}

