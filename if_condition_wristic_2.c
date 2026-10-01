#include <stdio.h>

void main()
{ 
int i,j;

printf(" enter value for i");
scanf("%d",&i);


printf(" enter value for j:");
scanf("%d",&j);

if(j==0)
{ 

printf(" division by zero is not allowed ");

}
else 
{

    float ans = i/j;
    printf(" division is :%f",ans);
}


}