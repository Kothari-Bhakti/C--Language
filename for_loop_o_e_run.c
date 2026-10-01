# include <stdio.h>

void main ()
{
    int ev; 

    printf(" Enter the value:");
    scanf("%d",&ev);

    for (int i=0; i<=ev; i++)
    {
        if (i%2==0)
        {
            printf("%d even number\n",i);
        }
        else
        {
            printf("%d odd number\n",i);
        }
    }
    
}