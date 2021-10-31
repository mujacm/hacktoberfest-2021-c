#include <stdio.h>

#include <stdlib.h>

 
int main() {
    char str[100];
     char d;//define Variable
     char rtr[10];//define Array
     scanf("%c",&d);
     printf("%c\n",d);
     scanf("%s",&rtr);
     printf("%s\n",rtr);
    // fgets(str, 100, stdin); 
    scanf(" %[^\n]%*c", &str);
    printf("Your Name is: %s", str);
    return 0;
}
