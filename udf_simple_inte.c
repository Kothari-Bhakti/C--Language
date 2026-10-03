#include <stdio.h>

/*with argument and with return
float prn(int p, float r,int n)

{
   float ans = (p*r*n)/100;
   return ans;
}
void main()
{
   printf("%.2f", prn( 60000,7.2,5));
}
  //simple interest with  argument and no return*/

 /*   void prn( int p,float r,int n)
 {
     float answer = (p*r*n)/100;
     printf("%.2f",answer);
 }
 void main()
 {
   int p, n;
   float r;
   printf("enter value for p:");
     scanf("%d",&p);

     printf("enter value for r:");
     scanf("%f",&r);
   
     printf("enter value for n:");
     scanf("%d",&n);

    prn(p,r,n);
 }*/

  //simple interest no argument with return valu//
 /*     float prn()
{
       int p,n;
      float r;

      printf("enter your p");
      scanf("%d",&p);

      printf("enter your r");
      scanf("%f",&r);

      printf("enter your n");
      scanf("%d",&n);

      float ans=(p*r*n)/100; 
      return ans;
}
void main()
{
         
     printf("%f",prn());

}*/
 //simple interest no argument and no return

 void prn()
 {
   int p,n;
   float r;
   printf(" enter your choice:");
   scanf("%d",&p);

   printf("enter your choice:");
   scanf("%f",&r);
   
   printf(" enter your choice:");
   scanf("%d",&n);

   float ans=(p*r*n)/100;
   printf("%f",ans);

 }
 void main()
 {
   prn();
 }