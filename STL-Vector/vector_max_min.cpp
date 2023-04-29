#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,7,9,2,15,20};
    vector<int>::iterator it;

    //it = max_element(v.begin(), v.end()); for finding the maximum element of the vector
    it=min_element(v.begin(), v.end()); // for finding the minimum element
    cout<<*it;


}
