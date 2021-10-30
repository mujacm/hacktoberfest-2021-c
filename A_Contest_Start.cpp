# include<bits/stdc++.h>
# define ll unsigned long long int
using namespace std;
void solve()
{
    ll n,x,t;
    cin>>n>>x>>t;
        ll s=t/x;
        if(s>n) s=n;
        cout<<(n-s)*s+(s*(s-1))/2<<endl;
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