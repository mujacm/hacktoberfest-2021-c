#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll t,i;
       cin>>t>>i;
       if(i==1)
       cout<<"NO"<<endl;
       else
       {
       cout<<"YES"<<endl;
       cout<<t<<" "<<t*i<<" "<<t*(i+1)<<endl;
       }
   }
    return 0;
}