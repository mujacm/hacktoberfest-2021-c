#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int min(int a,int b)
{
    if(a<b)
    return a;
    else 
    return b;
}
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(max(a,b)>min(c,d)&&max(c,d)>min(a,b))
    cout<<"YES"<<endl;
    // if(max(c,d)>min(a,b))
    //cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
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