#include<bits/stdc++.h>
# define ll  int
using namespace std;
int main()
{
    ll n,a=0,b=0,s=0,i=0,f=0;
    cin>>n;
    int d=n;
    while(d)
    {
        s++;
        d=d/10;
    }
    //cout<<s;
    int ar[s],h=0;
    h=n;
    while(h>0)
    {
        ar[i]=h%10;
        i++;
        h=h/10;
    }
    /*for(int j=i-1;j>=0;j--)
    cout<<ar[j];*/
    for(int j=i-1;j>=0;j--)
    {
        if(ar[j]==4||ar[j]==7)
        f++;
    }
    //cout<<f;
    if(f==s)
    cout<<"YES";
    //cout<<f;
    else if(n%4==0||n%7==0||n%47==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}