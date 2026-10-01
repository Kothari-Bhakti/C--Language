# include <stdio.h>

void main()
{
    int a;
    printf(" Enter 1st value:");
    scanf("%d",&a);

    do
    {
        if(a%2==0)
        {
        printf(" %d even\n",a);
        }
        else
        {
            printf("%d odd\n",a);
        }
          a++;
    } 
    while ( a<=50);
    
}