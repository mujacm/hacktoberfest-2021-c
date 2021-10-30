#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        while(n)
        //for(int i=n-1;i>=1;i--)
        {
            i=n-1;
            n=(n&i);
        }
      cout<<i<<endl;
    }
    return 0;
}
