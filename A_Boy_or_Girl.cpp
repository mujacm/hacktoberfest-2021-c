#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    //int j=str.size();
    set <char>v1 ( begin( str ) , end( str ) );
    int f=v1.size();
    if(f%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    /*for (auto i : v1)
        cout << i << " ";*/
    return 0;
}