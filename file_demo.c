#include <stdio.h>
void main()
{
    FILE* fptr;
    char ch;

    fptr = fopen("BCA.txt","a+");

    fprintf(fptr," all");

  while(1)
  {
    ch = fgetc(fptr);

    if(ch == EOF)
    {
        break;
    }
    else
    {
        printf("%c", ch);
    }
    
  }
  fclose(fptr);

}