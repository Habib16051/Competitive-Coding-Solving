#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator it;

    //Inserting element into the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v[2]=15;

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
}
