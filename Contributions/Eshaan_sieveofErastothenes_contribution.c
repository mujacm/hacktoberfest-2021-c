#include <stdio.h>

int a[100] = {0}, i;

void logic (int n){

    a[0]=a[1]=1;

    for(i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<n;j+=i){
            if(a[j]==0)
            a[j]=1;
            }
        }
    }

    for(i=2;i<n;i++){
        if(a[i]==0)
        printf("%d ", i);
    }
}

int main(){

    int n;
    scanf("%d", &n);

    logic(n);
    
    return 0;
}
