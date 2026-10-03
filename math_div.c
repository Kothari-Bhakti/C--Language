/*
   math()
   8)div 
  */
 #include <stdio.h>
 #include <math.h>
#include <stdlib.h>

 void main()
 {
     int a,b;

     printf(" enter your value:");
     scanf(" %d",&a);

     printf(" enter your value:");
     scanf("%d",&b);

    div_t ans = div(a,b);
    printf("%d\n",ans.quot);
   printf("%d\n",ans.rem);
    
 }
