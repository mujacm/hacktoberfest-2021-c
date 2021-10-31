#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z,w,v;
    if((a>1&&b>1&&c>1)&&(a==b&&a==c&&a==c))
    cout<<a*b*c;
    else
    {
    x=a+b*c;
    y=a*(b+c);
    z=a*b*c;
    w=(a+b)*c;
    v=a+b+c;
    if(x>y&&x>z&&x>w&&x>v)
    cout<<x;
    if(y>z&&y>=w&&y>v&&y>x)
    cout<<y;
    if(z>w&z>v&&z>y&&z>x)
    cout<<z;
    if(w>v&&w>y&&w>z&&w>x)
    cout<<w;
    if(v>x&&v>=y&&v>z&&v>w)
    cout<<v;
    }
    return 0;
}