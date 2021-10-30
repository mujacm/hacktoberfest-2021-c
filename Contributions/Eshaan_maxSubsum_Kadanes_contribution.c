#include <stdio.h>

int max(int m, int n){
    if(m>n)
    return m;
    else
    return n;
}

int main(){

    int n;
    scanf("%d", &n);

    int a[n], i, curr=0, maxSum=-1000000, maxEle=-1000000;

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        curr+=a[i];
        maxEle = max(maxEle, a[i]);
        if(curr<0)
        curr=0;
        maxSum = max(maxSum, curr);
    }

    if(maxSum!=0)
    printf("%d", maxSum);
    else
    printf("%d", maxEle);
}
