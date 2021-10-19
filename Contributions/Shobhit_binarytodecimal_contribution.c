#include<stdio.h>
int main()
{
        int n;
        int d,dec=0,j,k=1,i=1;
        printf("Enter the binary number\n");
        scanf("%d",&n);
        for(j=n;j>0;j=j/10)
        {
                d=j%10;
                if(i==1)
                k*=1;
                else
                k*=2;
                dec=dec+(d*k);
                i++;
        }
        printf("The decimal equivalent is:%d",dec);
        return 0;
}
