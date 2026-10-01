#include <stdio.h>
#include <ctype.h>
 void main()
 {
    char a;
    printf("enter your character..");
    getchar();
 
  
    if(isprint(a))
    {
        printf(" printable");
    }
    else
    {
        printf(" it is not printable..");
    }
 }