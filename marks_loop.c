# include <stdio.h>

void main()
{
    int total=0;
    int marks=0;
    for (int i=1; i<=3; i++)
    {
      printf("Enter marks for subject:%d",i);
      scanf("%d",&marks);

      total+=marks;
      if(i==3)
      {
        printf("total marks: %d \n",total);
      }

    }
    float per= total/3;
    printf("\n percentage:%f\n",per);

    if(per>100)
    {
        printf("enter correct value");
    }
    
    if(per>=70)
    {
        printf("distiction\n");
    }
    else if(per>=60)
    {
        printf("first class");
    }
    else if( per>=50)
    {
        printf("second class");
    }
    else if(per>=40)
    {
        printf("pass class");
    }
    else
    {
        printf(" try again");
    }
    
}