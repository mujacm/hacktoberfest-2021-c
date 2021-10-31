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
        string str;
        cin>>str;
        ll i,j;
         ll g=0;
        for(i=0;i<n;i++)
        { 
           
            for(j=i+1;j<n;j++)
            {
              if(str[i]==str[j]&&str[j]!=str[j-1])//&&str[j]!=str[j-1]&&(i-j>=1))
              {
                  g=1;
                  break;
              }
            }
        }
        if(g==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
        return 0;
    }