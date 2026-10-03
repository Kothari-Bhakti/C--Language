#include <stdio.h>
#include <string.h>

void main()
{
    char nm[7];
    char anm[7];
    printf("enter your choice..");
    scanf("%s",&nm);

    printf("enter your choice..");
    scanf("%s",&anm);
     
    int res =strncmp(nm,anm,4);

    printf(" comparision result :%d",res);
}