#include <stdio.h>
void main()
{
    int a[5]={10,20,30,40,50};

    int *p = a;


    for (int i = 0; i <= 4; i++)
    {
       printf("%d \n", (p+i));
       //printf("%d \n",(*p+i));
    }
    
}