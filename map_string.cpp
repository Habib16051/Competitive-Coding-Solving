#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> id;

    id["Habib"] = 1;
    id["Zayed"] = 2;
    id["Tanvir"] = 3;
    id["Mehedi"] = 4;

    for(auto u:id)
        cout<<u.first<<" "<<u.second<<endl;


}
