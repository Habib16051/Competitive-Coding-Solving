#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "xzajjurrhhgd";

    cout<<*max_element(s.begin(), s.end())<<endl;
    cout<<*min_element(s.begin(), s.end())<<endl;
}
