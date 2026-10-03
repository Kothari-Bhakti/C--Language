#include <stdio.h>
#include <string.h>

void main()
{
    char num[4];

    printf(" enter your value:");
    scanf("%s",&num);
     
   if(sl(num)<=4)
   {
    printf("password is week...");
   }
   else if(strlen(num)>=8)
   {
    printf("password is strong....");
   }
   else
   {
    printf("password is super ....");
   }
  



}