#include <stdio.h>
#include <string.h>

void main()
{

char a[]="IT college";
char*p;

p= strchr (a,'c');
if(p)
{
    printf(" found...");
}
else
{
    printf("not found..");
}
}