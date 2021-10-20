#include <stdio.h>

int max(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}

int main(){

    int n, i, pd, cur=2, ans=2;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    pd = a[1]-a[0];

    for (i=2;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            cur++;
            }
        else{
            cur=2;
            pd = a[i]-a[i-1];
        }
        ans = max(ans, cur);
    }

    printf("%d", ans);
    
}