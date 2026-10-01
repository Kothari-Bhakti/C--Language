#include <stdio.h>
#include <string.h>

void main()
{  char nm[10];
    char snm[10];
   printf(" Enter your name:");
   scanf("%s",nm);

   printf("Enter your sname:");
    scanf("%s",snm);

   int a = strlen(nm);
   int b = strlen(snm);
  
  if(a >= 3 && b >= 3)
  {
   printf(strcat(nm,nm));
  }
  else
  {
   printf(" enter again....");
  }
}