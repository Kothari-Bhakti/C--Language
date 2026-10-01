# include <stdio.h>

void main()
{
    int inch;

    printf (" enter value for inch:");

    scanf("%d",&inch);

    int feet = inch/12;

    printf("feet:%d",feet);
}