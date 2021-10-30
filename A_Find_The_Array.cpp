#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll d=sqrt(n);
        if((d*d)!=n)
        d++;
        cout<<d<<endl;
    }
    return 0;
}