#include <stdio.h>
void main()
{
    int id=102;
    int *p;

    p =&id;
    printf("memory address of p variable is %x\n",p);
    printf("value of p variable is %d\n",id);

}