#include<bits/stdc++.h>
using namespace std;
int natural(int n)
{
    if(n==1) return 1;

    else
        return n + natural(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<natural(n);
}
