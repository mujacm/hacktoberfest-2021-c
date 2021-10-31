#include <stdio.h>
 
int main()
{
    int num1,num2;
    char ch;
    float result;
    
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            printf("Result for the equation: %d %c %d = %f\n",num1,ch,num2,result);
            break;
         
        case '*':
            result=num1*num2;
            printf("Result for the equation: %d %c %d = %f\n",num1,ch,num2,result);
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            printf("Result for the equation: %d %c %d = %f\n",num1,ch,num2,result);
            break;
             
        case '%':
            result=num1%num2;
            printf("Result for the equation: %d %c %d = %f\n",num1,ch,num2,result);
            break;
        
        default:
            printf("invalid operation.\n PLEASE TRY AGAIN\n\n");
    }
    return 0;
}