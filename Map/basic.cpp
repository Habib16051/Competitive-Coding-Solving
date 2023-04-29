#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;

    mp.insert({1,20}); // inserting process 1
    mp[2] = 30; //inserting process 2
    mp.insert({3, 40});
    mp.insert({5, 60});
    mp.insert({4, 50});

    cout<<mp.size()<<endl;

    //cout<<mp[1]<<endl; // printing option 1
    //cout<<mp.at(2)<<endl;
     // printing option 2
    // to print all the element we can run a loop

    /**for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl; // printing all the element using loop
    }**/

    //printing all the element using iterator
    map<int, int>::iterator it;

    for(it=mp.begin(); it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
