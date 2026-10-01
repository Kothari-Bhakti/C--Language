#include <stdio.h>
 
 void main()
 {
   int per;

   printf("enter per ");
   scanf("%d",&per);

   if(per >100)
   {
    printf("non allowed");
   }
   else if(per>=90)
   {
     printf("A+");
   }
   else if( per>=80)
    {
      printf("A");
    }
    else if( per>=79)
     {
       printf("B+");     
     } 
    else if( per>=60)
    {
        printf("B");
    }
      else if( per>=50)
     {
      printf("c+");
     } 
     else if( per>=40)
     {
      printf(" pass class");
     }
     else
     { 
      printf(" try again......");
     }
}