#include <stdio.h>

int max(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}

int main(){

    int a[6], i, mx=-1;
    for(i=0;i<6;i++){
        scanf("%d", &a[i]);
        mx = max(mx, a[i]);
        printf("%d ", mx);
    }
}
