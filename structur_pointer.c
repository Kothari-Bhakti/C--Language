#include <stdio.h>
#include <string.h>

struct employee
{
       int emp_ID;
       char emp_name[10];
       char emp_desi[10];
};
void main()
{

   //    int employee[3] = {99, "Bhakti", "Manager"};

    struct employee e1= { 99, "bhakti", "student" };
       
       struct employee *emp;

     emp = &e1;

     printf("%d\n",emp->emp_ID);
     printf("%s\n",emp->emp_name);
     printf("%s\n",emp->emp_desi);
     
    
    
}
