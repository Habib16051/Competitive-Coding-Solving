#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;

    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(3);

    s.erase(5);

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" "<<endl;
    }



}
