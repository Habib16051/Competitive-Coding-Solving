#include<bits/stdc++.h>
using namespace std;

int countAns(string s)
{
    int ans=0, n=s.size();
    int hashcount=0, exAlphabet=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='#')
        {
            hashcount++;
            if(hashcount%2==0)
            {
                ans+=exAlphabet;
                exAlphabet=0;
            }
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            if(hashcount%2==1 && s[i-1]=='!')
            {
                exAlphabet++;
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {

        cin>>s;

        cout<<countAns(s)<<endl;
    }
}
