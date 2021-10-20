#include<stdio.h>

void Tower_of_Hanoi(int n,char x,char y,char z) {
   if(n>0) {
       
      Tower_of_Hanoi(n-1,x,z,y);
      printf("\n%c to %c",x,y);
      Tower_of_Hanoi(n-1,z,y,x);
   }
}
int main() {
   int n=3;
   Tower_of_Hanoi(n,'A','B','C');
}
