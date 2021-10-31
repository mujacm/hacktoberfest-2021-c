#include<bits/stdc++.h>
//# define p(d)  (d).begin(),(d).end()
# define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    int x=0;
    //ll f=0;
    while(t--)
    {
        //static int f;
        
        //string ch;
        char ch[3];
        for(int i=0;i<3;i++)
        cin>>ch[i];
        //ll ar[3],f=0;
        if(ch[0]=='X'&&ch[1]=='+'&&ch[2]=='+')
        x++;
        else if(ch[0]=='+'&&ch[1]=='+'&&ch[2]=='X')
        x++;
        else if(ch[0]=='X'&&ch[1]=='-'&&ch[2]=='-')
        x--;
        else if(ch[0]=='-'&&ch[1]=='-'&&ch[2]=='X')
        x--;
        
    }
    cout<<x;
   /* int n;
    cin>>n;
    vector<string>v1(n);
    for(int i=0;i<(int)n;++i)
    cin>>v1[i];
   cout<<count(p(v1),"x++")+count(p(v1),"++x")-count(p(v1),"--x")-count(p(v1),"x--");*/
    return 0;
}