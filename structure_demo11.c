#include <stdio.h>
struct emp
{
    int emp_id;
    char emp_name[50];
    char emp_desi[50];
}e1;

void main()
{
     = {101, "Bhavesh", "AAAAA"};
    

    printf("%d\n",e1.emp_id);
    printf("%s\n",e1.emp_name);
    printf("%s\n",e1.emp_desi);
}
