#include <stdio.h>

void main()
{
    int i;
    double number, average, sum=0.0;

    for  (i = 1; i <10; i++)
    {
        printf(" %d enter a num:",i);
        scanf("%lf",&number);
        if (number<=0)
        {
              goto  aaa;
        }
        sum+=number;
    }
    aaa:

    average = sum/(i-1);
    printf(" sum=%2.f",sum);
    printf(" Average= %.2f",average);
}