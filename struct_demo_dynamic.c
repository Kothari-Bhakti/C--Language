#include <stdio.h>
struct emp
{
    int emp_id;
    char emp_name[50];
    char emp_desi[50];
}e1;
void main()
{

    printf("enter emp ID:");
    scanf("%d", &e1.emp_id);

    printf("enter emp name:");
    scanf("%s", &e1.emp_name);

    printf("enter emp desi:");
    scanf("%s", &e1.emp_desi);

    printf("%d\n", e1.emp_id);
    printf("%s\n", e1.emp_name);
    printf("%s\n", e1.emp_desi);
}
