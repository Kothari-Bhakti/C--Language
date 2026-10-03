#include <stdio.h>
 void main()

{
    int a,b,total,multi,division,subs;

    char choice;
    printf("ENTER YOUR CHOICE..");
    scanf("%c",&choice);

     switch (choice)
     { 
        case 'A':
        case 'a':

         printf("enter 1st valie");
         scanf("%d",&a);
               
         printf("enter 2ed value");
         scanf("%d",&b);

            total=a+b;
            printf("%d",total);
         break;    

        
         
       

        case'M':

        printf(" enter 1st value");
        scanf("%d",&a);
            
        printf(" enter 2ed value");
        scanf("%d",&b);
        
       multi= a*b;
        printf("%d",multi);
        break;

       case'm':

        printf(" enter 1st value");
        scanf("%d",&a);
            
        printf(" enter 2ed value");
        scanf("%d",&b);
        
         multi= a*b;
        printf("%d",multi);
        break;

        case'd':
        case'D':
    
        printf(" enter 1st valie");
        scanf("%d",&a);
            
        printf(" enter 2ed value");
        scanf("%d",&b);
        
      division= a/b;
        printf("%d",division);
        break;

        
    
        

        case'S':

        printf(" enter 1st valie");
        scanf("%d",&a);

        printf(" enter 2ed value");
        scanf("%d",&b);

        subs= a-b;
        printf("%d",subs);
        break;

        case's':

        printf(" enter 1st valie");
        scanf("%d",&a);

        printf(" enter 2ed value");
        scanf("%d",&b);

        subs= a-b;
        printf("%d",subs);
        break;

        default:
        printf(" not allowed any num.. ");
        break;
   }
}   
