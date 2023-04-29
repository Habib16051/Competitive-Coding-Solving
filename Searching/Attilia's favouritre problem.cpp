#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        sort(s.begin(), s.end());

        char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char A = s[n-1];

        for(int i=0;i<26;i++)
        {
            if(A==arr[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }



    }
}
