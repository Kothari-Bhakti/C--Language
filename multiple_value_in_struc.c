#include <stdio.h>
struct student_inf

{
     int seat_no;
     char name[10];
     char grade;
}std;
void main ()
{
    std={102,"bhakti",'A'};
    
    printf(" seat no is:\t%d\n",std.seat_no);
    printf(" name is:\t%s\n",std.name);
    printf(" grade is:\t%c\n",std.grade);
    
    
}