#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
        int n;
        cin>>n;
        ll a[n],b[n];
        ll s=0,d=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            d=d+a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            s=s+b[i];
        }
        if(d!=s)
        cout<<"-1"<<endl;
        else
        {
            vector<ll>v1,v2;
            ll temp=0;
            for(ll i=0;i<n;i++)
            {
                if(a[i]==b[i])
                continue;
                else if(a[i]<b[i])
                {
                   temp=b[i]-a[i];
                   while(temp--)
                   {
                       v1.push_back(i);
                   }
                }
                else if(a[i]>b[i])
                {
                    temp=a[i]-b[i];
                    while(temp--)
                    {
                        v2.push_back(i);
                    }
                }
            }
            if(v1.size()==0 && v2.size()==0)
            cout<<0<<endl;
            else
            {
                cout<<v2.size()<<endl;
                for(ll i=0;i<v2.size();i++)
                cout<<v2[i]+1<<" "<<v1[i]+1<<endl;
            }
        }
    }    
        return  0;
}
