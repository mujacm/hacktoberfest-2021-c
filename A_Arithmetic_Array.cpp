#include<bits/stdc++.h>
using namespace std;
# define ll long long int
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=1;i<=n;i++)
    cin>>ar[i];
    ll s=0;
    for(ll i=1;i<=n;i++)
    {
        s=s+ar[i];
       
    }
     ll x=(n+1)-s;
    if(s==n)
    cout<<"0"<<endl;
   else if(x>0)
    cout<<"1"<<endl;
    else
    cout<<abs(abs(s)-n)<<endl;;
    
  ///  if(s==n)
    //cout<<"0"<<endl;
    //else
    //{
     
    //}
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}