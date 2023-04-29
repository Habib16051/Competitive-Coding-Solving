<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> m;
    map<string, int>:: iterator it;

    m["Habib"] = 16;
    m["Tanvir"] = 20;
    m["Zayed"] = 45;
    m["Anima"] = 18;

    for( it = m.begin(); it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> m;
    map<string, int>:: iterator it;

    m["Habib"] = 16;
    m["Tanvir"] = 20;
    m["Zayed"] = 45;
    m["Anima"] = 18;

    for( it = m.begin(); it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
>>>>>>> 76278e7b7f4e25bf4eaafdcd2961afecacce4f99
