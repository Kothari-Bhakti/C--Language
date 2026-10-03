#include <stdio.h>
#include<string.h>

void main()
{
   char one[7];
   char two[7];

   char* p;
   printf("enter your choice..");
   scanf("%s",&one);

   printf("enter your choice..");
   scanf("%s",&two);
   
   p = strstr(one,two);
   if(p)
   {
        printf("string found..");
   }
   else
   {
        printf("not found.. ");
   }

}