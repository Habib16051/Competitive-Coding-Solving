#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;

    s.insert(10);
    s.insert(5);
    s.insert(20);

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}
