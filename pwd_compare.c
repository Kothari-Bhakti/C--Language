#include <stdio.h>
#include <string.h>

void main()
{
    char nm[15];
    char anm[15];

    
     printf(" enter your pass....");
     scanf("%d",&nm);

     printf("enter your comfirm pass...");
     scanf("%d",&anm);
     
     int res =strcmp(nm,anm);

     printf(" result...%d\n",res);

     if(strcmp(nm,anm)==0)
    {
        printf("password is done..");
    }
    else
    {
        printf(" please enter correct pass...");
    }

}