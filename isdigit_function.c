#include <stdio.h>
#include <ctype.h>
void main()
{
    char a;
    printf("enter your digit..");
    scanf("%c",&a);

    if (isdigit(a))
    {
       printf("yes..");
    }
    else
    {
        printf("no...");
    }


}