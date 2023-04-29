#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,4,6,8};

    v.resize(10);

    //for(int i=0;i<v.size();i++)
    //We can also use for each loop
    for(auto u:v)
        cout<<u<<" ";
}
