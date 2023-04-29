#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> v;

    v.push_back("Habib");
    v.push_back("Israt");
    v.push_back("nur");
    v.push_back("Anvir");
    v.push_back("zayed");

    sort(v.rbegin(), v.rend());

    for(auto u:v) cout<< u << endl;

}
