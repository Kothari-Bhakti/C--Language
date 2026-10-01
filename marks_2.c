#include <stdio.h>

void main()

{
    int english,guj,maths,science,psycology;
    float hindi; 

    printf(" enter marks for english");
    scanf("%d",&english);

    printf("enter marks for hindi");
    scanf("%f",&hindi);

    printf("enter marks for guj");
    scanf("%d",&guj);

    printf("enter marks for maths");
    scanf("%d",&maths);

    printf("enter marks for science");
    scanf("%d",&science);


    printf("enter marks mfor psycology");
    scanf("%d",&psycology);

    float  total =   english+guj+maths+science+psycology+hindi;
    printf("%f",total);

    float per = total/6;
    printf("in percentage:%f",per);
     
     if( per>100)
        {
            printf(" non allowed....");
        } 
         else if( per>=90)
         {
            printf(" A+ \n distiction");
         }
          else if( per>=80)
         {
            printf("A\n  distiction");
         }
         else if(per>=70)
         {
            printf("B+ \ndistiction..");
         }
        else if( per>=60)
        {
            printf("B\n first class...");
        }
        else if(per>=50)
        {
            printf("c+ \n second class");
        }
        else if(per>=40)
        {
            printf(" c\n pass class..");
        }
        else 
        {
            printf("try again");
        }
        
}