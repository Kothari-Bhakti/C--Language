#include <stdio.h>
#include <string.h>

struct product
{
    int qty;
    int p_p;
    int s_p;
    char name[10];
    int profit;
};
void main()
{
struct product p[5];

    p[0].qty=50;
    p[0].p_p=10000;
    p[0].s_p=12000;
    strcpy(p[0].name,"tv1");

    p[1].qty=1;
    p[1].p_p=15000;
    p[1].s_p=20000;
    strcpy(p[1].name,"tv2");
            
    p[2].qty=1;
    p[2].p_p=5000;
    p[2].s_p=8000;
    strcpy(p[2].name,"tV3");

    p[3].qty=1;
    p[3].p_p=10000;
    p[3].s_p=14000;
    strcpy(p[3].name,"tv4");

    p[4].qty=1;
    p[4].p_p=10000;
    p[4].s_p=16000;
    strcpy(p[4].name,"tv5");


    for (int i = 0; i <= 4; i++)
    {
        p[i].profit = (p[i].s_p - p[i].p_p) * (p[i].qty);

        printf("the profit of %s is:%d\n",p[i].name, p[i].profit);
    }
    
    
    

}