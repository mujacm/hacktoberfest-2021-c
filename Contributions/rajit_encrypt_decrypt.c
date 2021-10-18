#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char a[100];
    int choose;
    printf("Enter string: ");
    scanf("%s", &a);

    printf("\n 1. ENCRYPT \n 2. DECRYPT \n Choose :");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
    {
        for (int i = 0;i<strlen(a); i++)
        {
            a[i] += 3;
        }
        break;
    }
    case 2:
    {
        for (int i = 0;i<strlen(a); i++)
        {
            a[i] -= 3;
        }
        break;
    }
    default: printf("Error");
    }

    printf("\n %s",a);


    return 0;
}
