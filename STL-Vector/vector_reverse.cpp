#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3,5,6,7,9,1};

    //sort(v.rbegin(), v.rend()); //reverse sorting
    reverse(v.begin(), v.end()); // just reversing the vector as it is
    for(auto u:v)
        cout<<u<<" ";
}
