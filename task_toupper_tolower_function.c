#include <stdio.h>
#include <ctype.h>
void main()
{
    char i;
    printf("enter your char..");
    scanf("%c",&i);

    if(islower(i))
    {
    printf("toupper:%c",toupper(i));
    }
    else
    {
        printf("tolower:%c",tolower(i));
    }
    
}