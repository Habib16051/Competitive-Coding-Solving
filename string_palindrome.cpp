#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "madam";
    string tmp = s;

    reverse(tmp.begin(), tmp.end());

    if(s==tmp)
        cout<<"Palindrome!!";
    else
        cout<<"Hush! Not Palindrome!!"<<endl;
}
