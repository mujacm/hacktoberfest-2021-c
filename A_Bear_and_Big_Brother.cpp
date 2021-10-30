#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    int i,s,d=0;
    for(i=1;i<=a*b;i++)
    {
        a=a*3;
        b=b*2;
        s++;
        if(a>b)
        {
            d=s;
            break;
        }
    }
    cout<<s;
    return 0;
}