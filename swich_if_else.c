#include <stdio.h>
 void main()

{


   char ch;
   printf("enter your choice (+,-,*):");
   scanf("%c",&ch);

   int a,b;

      switch(ch)
    {
        case '*':

        printf(" enter 1st value..");
         printf(" 2ed value");

         scanf(" %d",&a);

         scanf(" %d",&b);


         if (a==0)
         {
            printf(" zero is not possibl\n");
         }
         else
         {
            printf(" zero is not possible\n");
         }
         int ml=a*b;
         printf("multification:%d",ml);
         break;
    }     
      
 

  
        
    
        

}   
