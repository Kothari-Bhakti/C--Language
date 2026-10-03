#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char nm[50];
    
    printf("enter your str..");
    scanf("%s",&nm);

    int a = strlen(nm);



    for(int i = 0; i <= a; i++)
    {
        printf("%c",toupper(nm[i]));
    }
    
}
