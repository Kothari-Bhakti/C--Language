#include <stdio.h>
#include <ctype.h>
void main()
{
    char a;
    printf("enter your character..");
    scanf("%c",&a);

    printf("%c",toupper(a));
}