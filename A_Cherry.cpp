#include<bits/stdc++.h>
# define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for( ll i=0;i<n;i++)
    cin>>ar[i];
    vector<ll>v;
    if(n==2)
    cout<<(ar[0]*ar[1])<<endl;
   /* else
    {
        sort(ar,ar+n);
        set<ll> s(ar, ar+n);
        vector<ll> v(s.begin(), s.end());
        cout<<(v[n-1]*min(v[n-2],v[n-3]))<<endl;
        /*if(ar[n-2]==ar[n-1])
        cout<<(ar[n-1]*ar[n-3])<<endl;
        else 
        cout<<(ar[n-1]*min(ar[n-2],ar[n-3]))<<endl;
        //set<ll> s(begin(ar), end(ar));
        //set<int> s(ar, ar+n);
        cout<<s[n-1]*s[n-2]<<endl;
        //set<ll>s(ar.begin(),ar.end());
    }*/
    else
    {
        ll b=0;
        //sort(ar,ar+n);
        //for(int i=0;i<n-1;i++)
        //{
            for(int j=0;j<n-1;j++)
            {
              b=max(ar[j],ar[j+1])*min(ar[j],ar[j+1]) ;
              v.push_back(b);
            }
       // }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}