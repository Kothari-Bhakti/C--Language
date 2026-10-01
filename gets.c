#include <stdio.h>
#include <string.h>

void main()
{
 char nm[50];
 char snm[50];

 printf(" enter your name");
 gets(nm);

 printf(" enter your sname");
 gets(snm);

 printf(" you have entered: %s",strcat(nm,snm));

}