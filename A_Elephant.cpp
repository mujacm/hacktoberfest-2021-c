#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll s=0;
    if(n%5==0)
    s=n/5;
    else
    s=n/5+1;
    cout<<s;
    return 0;
}