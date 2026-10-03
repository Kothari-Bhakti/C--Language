# include <stdio.h>

void main()
{
    int basic_salary;
    
    printf("Enter basic salary");
    scanf("%d",&basic_salary);

    int DA=basic_salary*0.5;
    int HRN=basic_salary*0.15;
    int MA=500;
    int EPF=basic_salary*0.12;

    int gross_salary = DA+HRN+MA+EPF+basic_salary;
    
    int LOAN=5000;
    int PT=200;
    int TPS=basic_salary*0.10;

    int NET_SALARY= gross_salary-PT-TPS;
    printf("NET_SALARY IS :%d",NET_SALARY);
}