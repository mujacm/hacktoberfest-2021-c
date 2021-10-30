#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int s=0;
    for(int i=0;i<str.size();i++)
    {
      if(str[i]>='A'&&str[i]<='Z')
         s++;
    }
     if(s==str.size())
     {
         for(int i=0;i<str.size();i++)
         {
             str[i]=str[i]+32;
         }
        cout<<str;
     }
     else if(str[0]>='a'&&str[0]<='z'&&s==str.size()-1)
     {
         str[0]=str[0]-32;
       for(int i=1;i<str.size();i++)
       {
           str[i]=str[i]+32;
       }
       cout<<str;
     }
     else
     cout<<str;
    return 0;
}