#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v1;
    for(ll i=1;i<=n;i++)
    {
        if(i%2==1)
        v1.push_back(i);
    }
    for(ll i=2;i<=n;i++)
    {
        if(i%2==0)
        v1.push_back(i);
    }
     //for(int i=0;i<v1.size();i++)
     //cout<<v1[i]<<endl;
     cout<<v1[k-1];
  return 0;
}