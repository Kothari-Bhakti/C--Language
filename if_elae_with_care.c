#include <stdio.h>
 void main()

{
    int a,b;

    printf("enter A for addition : \n");
    printf(" enter M for multiplication : \n");
    printf(" enter S for subscription : \n");
    printf(" enterD for division : \n");

     char ch;
     printf("Enter your choice : ");
     scanf("%c",&ch);

     if(ch == 'a' || ch == 'A')
     {
         printf("enter 1st valie");
         scanf("%d",&a);
               
         printf("enter 2ed value");
         scanf("%d",&b);

            int total=a+b;
            printf("%d",total);

     }
    
    else if(ch == 'M' || ch == 'm')
    {
    
        printf(" enter 1st value");
        scanf("%d",&a);
            
        printf(" enter 2ed value");
        scanf("%d",&b);
        
        int multi= a*b;
        printf("%d",multi);
        
    }
    
    else if(ch == 'd'|| ch == 'D')
    {    
        printf(" enter 1st valie");
        scanf("%d",&a);
            
        printf(" enter 2ed value");
        scanf("%d",&b);
        
        int division= a/b;
        printf("%d",division);
    }
    else if(ch == 's'|| ch == 'S')

    {
        printf(" enter 1st valie");
        scanf("%d",&a);

        printf(" enter 2ed value");
        scanf("%d",&b);

        int subs= a-b;
        printf("%d",subs);

    }
   else 
   {
      printf(" not allowed any num ");

   }
}   

