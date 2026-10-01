#include <stdio.h>
#include <ctype.h>

void main()
{
    char a;
    printf("enter your alphabet..");
    scanf("%c",&a);
     
     if(isalpha(a))
     {
        printf("your entered value is aphabet..");
     }
     else
     {
        printf("your entered value is not alphabet..");
     }
}