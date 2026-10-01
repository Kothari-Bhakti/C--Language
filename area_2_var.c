#include <stdio.h>

int main()
{
    int l,w;

    printf("enter plot lenght : ");
    scanf("%d", &l);

    printf("enter plot width:");
    scanf("%d", &w);

    int area = l*w;

    printf("Area of plot is :( in sq.ft) %d", area);

    float var = area / 9;

    printf("In area of plot is:(in var )%f", var);

    return 0;

}