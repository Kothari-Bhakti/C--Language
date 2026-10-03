#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    printf("enter your character...");
    scanf("%c",&ch);

    printf("%c",tolower(ch));
}