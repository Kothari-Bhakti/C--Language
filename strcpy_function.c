#include <stdio.h>
#include <string.h>

void main()
{
    char nm[10];
    char anm[10];

    printf("enter your choice..");
    scanf("%s",&nm);
     
     strcpy (anm,nm);

    printf(" %s",anm);
}