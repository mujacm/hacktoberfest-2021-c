#include<stdio.h>  
int main()    
{    
    int number, reverse=0, r;    

    printf("Enter any number: ");    
    scanf("%d", &number);    
  
        while(number!=0)    
        {    
            r=number%10;    
            reverse=reverse*10+r;    
            number/=10;    
        }    
    
    printf("Reverse of the given number is: %d",reverse);    
    return 0;  
}   