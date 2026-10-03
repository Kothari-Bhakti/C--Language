#include <stdio.h>
#include <string.h>
struct product
{
     char name[15];
     int price;
};
void main()
{
    struct product p[3];
    

    strcpy(p[0].name,"computer");
    p[0].price=15000;

    strcpy(p[1].name,"mobile");
    p[1].price=10000;

    strcpy(p[2].name,"cemera");
    p[2].price=50000;

   // printf(" nameprice");
    for (int i = 0; i <=2; i++)
    {
        printf("%s\n",p[i].name);
        printf("%d\n",p[i].price);
    }
    
    
}