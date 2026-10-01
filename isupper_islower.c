#include <stdio.h>
#include <ctype.h>
void main()
{
    char a;
    printf("enter your char..");
    scanf("%c",&a);
    
    if(isupper(a))
    {
        printf("enterd character is uppercase");
    }
    else
    {
        printf("entered character is lowercase..");
    }
}