#include <stdio.h>
#include <string.h>

void main()
{
     char a[10];
     char b[10];
      printf("enter your choice");
      scanf("%s",a);

      strncpy(b,a,3);

     printf("%s",b);
}