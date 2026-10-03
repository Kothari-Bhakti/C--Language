#include <stdio.h>

void main()
{

    char ch;
    int a,b,add,mul,div;

    printf(" enter your choice");
    scanf("%c",&ch);

    switch(ch)
    {

        case 'a':
        case 'A':
        case '+':

            printf(" enter 1st value.");
            scanf("%d",&a);
    
            printf(" enter 2ed value.");
            scanf("%d",&b);

            if(a==0|| b==0)
            {
                printf(" zero is not allowed .. enter approprite number..");
            }
            else
            {
                add=a+b;
                printf("%d",add);
            }
            break;

        case 'm':
        case 'M':
        case '*':

        printf(" enter 1st value.");
        scanf("%d",&a);
 
        printf(" enter 2ed value.");
        scanf("%d",&b);

        if(a==0|| b==0)
        {
            printf(" zero is not allowed .. enter approprite number..");
        }
        else
        {
            mul=a*b;
            printf("%d",mul);
        }
        break;

        case 'd':
        case 'D':
        case '/':

             printf(" enter 1st value.");
             scanf("%d",&a);
 
             printf(" enter 2ed value.");
             scanf("%d",&b);

            if(a==0|| b==0)
            {
                printf(" zero is not allowed .. enter approprite number..");
            }
            else
            {
                div=a/b;
                printf("%d",div);
            }
            break;

        default:
            printf("enter approprite char");

    }

}