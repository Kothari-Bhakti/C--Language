  /*
   math()
   7) fmod 
  */
 #include <stdio.h>
 #include <math.h>

 void main()
 {
    int a,b;
    printf(" enter your value:");
    scanf("%d",&a);

    printf(" enter your value:");
    scanf("%d",&b);

    printf("%f",fmod(a,b));
 }
 