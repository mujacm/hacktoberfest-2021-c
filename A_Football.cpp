#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
        string str;
        cin>>str;
        int n=str.size();
        ll i,j;
         ll g=0;
        for(i=0;i<n;i++)
        { 
           
            for(j=i+1;j<n;j++)
            {
              if(str[i]==str[j]&&str[j]==str[j-1])//&&str[j]!=str[j-1]&&(i-j>=1))
              {
                  g++;
              }
              else
              break;
            }
        }
        cout<<g;
        if(g>=7)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    return 0;
}