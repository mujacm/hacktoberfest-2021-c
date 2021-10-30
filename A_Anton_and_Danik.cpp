#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll a=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        a++;
        if(str[i]=='D')
        d++;
    }
    if(a>d)
    cout<<"Anton";
    else if(d>a)
    cout<<"Danik";
    else
    cout<<"Friendship";
    return 0;

}