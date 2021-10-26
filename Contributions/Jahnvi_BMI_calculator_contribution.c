#include<stdio.h>
//function to calculate BMI index
float BMI(float weight, float height) {
   return weight/height*2;
}
int main() {
   float weight, height;
   printf("Enter your weight(kg) and height(ft) respectively: ");
   scanf("%f %f",&weight,&height);
   
   float bmi = BMI(weight,height);
   printf("BMI index is : %.2f ",bmi);
   return 0;
}
