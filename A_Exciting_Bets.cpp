# include<bits/stdc++.h>
# define ll  long long int 
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
/*ll min(ll a,ll b)
{
    if(a<b)
    return a;
    else
    return b;
}*/
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
        cout<<0<<" "<<0<<endl;
        else if(abs(a-b)==1)
        cout<<"1"<<" "<<"0"<<endl;
        else
        {
            ll d=abs(a-b);
            ll s=min(a%d,d-a%d);
           // ll k=s%d;
            cout<<d<<" "<<s<<endl;
        }
    }
    
  return 0;
}