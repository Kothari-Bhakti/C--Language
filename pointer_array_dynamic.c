#include <stdio.h>
void main()
{
    int id[5];
    int *p =id;
    printf("enter your value for [0]");
    scanf("%d",&id[0]);

    printf("enter your value for [1]");
    scanf("%d",&id[1]);

    printf("enter your value for [2]");
    scanf("%d",&id[2]);

    printf("enter your value for [3]");
    scanf("%d",&id[3]);

    printf("enter your value for [4]");
    scanf("%d",&id[4]);

    for (int i = 0; i <=4; i++)
    {
        printf("%x\n",(p+i));
        
    }
    
}