# include<stdio.h>

void main()
{
    int p;
    float r;
    int n;

    printf(" enter  principal amount:-");
    scanf("%d",&p);


    printf("enter rate of intrest:-");
    scanf("%f",&r);


    printf("enter number of year:-");
    scanf("%d",&n);

    double ans =(p*r*n)/100;

    printf("%f",ans);
}