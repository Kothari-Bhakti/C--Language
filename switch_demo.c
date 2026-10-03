# include <stdio.h>

void main()
{
char choice;

printf(" Enter your choice (+,-,*,/)\n");
scanf("%c",&choice);

switch (choice)

{
case '+':
printf("addition..");
break;

case '-':
printf("substraction..");
break;

case '*':
printf(" multiplication..");
break;

case '/':
printf("division..");
break;

default:
printf(" Enter appropriate sing..");
break;

}
}