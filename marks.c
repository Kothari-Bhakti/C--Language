#include <stdio.h>

void main()

{

 int c,html,java,php,android,dotnet;

 printf("enter marks for c");
 scanf("%d",&c);

  printf("enter marks for html");
  scanf("%d",&html);

  printf("enter marks for java");
  scanf("%d",&java);

  printf("enter marks for php");
  scanf("%d",&php);

  printf("enter marks for android");
  scanf("%d",&android);

  printf("enter marks for dotnet");
  scanf("%d",&dotnet);

  int total = c+html+java+php+android+dotnet;
  printf("%d",total);

  float per =total/6;
  

  if (per>=90)
  {
  printf(" distiction....");     
  }

  else if(per >=60)

  {
    printf("first class ...."); 
  }

  else if(per>=50)
{
    printf(" sec class..");
  }

  else if(per>=40)

  {
    printf(" pass class..");
  }
  else
  {
    printf(" try again");
  }
    if (per>=90)
      {
        printf(" A+");
      }
 else if( per>=80)
     {
       printf("A");
     }

  else if( per>=70)
{

  printf("B+");
}
else if (per>=60)
{
  printf(" B");
}
else 
{
printf("C");
}
}


