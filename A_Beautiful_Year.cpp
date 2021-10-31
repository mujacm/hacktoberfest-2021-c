#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
   while(true)
   {
       n+=1;
       int a=n/1000;
       int b=n/100%10;
       int c=n/10%10;
       int d=n%10;
       if(d!=a&&c!=a&&b!=a&&d!=b&&c!=d&&c!=b)
       {
           break;
       }
   }
   cout<<n;
   return 0;
}