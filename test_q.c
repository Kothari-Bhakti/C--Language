#include <stdio.h>

void main()
{
   int num,total=0;
   
   for (int i=1; i <=10; i++)
   {
       printf(" enter your num:");
       scanf("%f",&num);

       total=total+num;
   }
    printf(" total is :%d\n",num);

}