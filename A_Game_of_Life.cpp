# include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,count;
        cin>>n>>count;
        string str;
        cin>>str;
        for(int i=0;i<count;i++)
        {
            string a=str;
            if(str[1]=='1')
            a[0]='1';
            if(str[n-2]=='1')
            a[n-1]='1';
            for(int j=1;j<=n-2;j++)
            {
                if(str[j-1]==str[j+1])
                continue;
                a[j]='1';
            }
            if(a==str)
            break;
            str=a;
        }
        
        cout<<str<<endl;
    }
    return 0;
}