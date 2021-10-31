#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    string str;
    cin>>str;
    set<char>v1(begin(str),end(str));
    //for(int i=0;i<str.size();i++)
    for(auto x : v1)
    cout<<x;
    return 0;
}