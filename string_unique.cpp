#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "bdaeaaaac";

    sort(s.begin(), s.end());
     int sz = unique(s.begin(), s.end()) - s.begin();

     for(int i=0;i<sz;i++)
     {
         cout<<s[i];
     }
     cout<<endl;

}
