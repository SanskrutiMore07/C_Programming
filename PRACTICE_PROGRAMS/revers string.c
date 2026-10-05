#include<stdio.h>
#include<conio.h>
int main()
{

      char csrc[20]="";
      char dsrc[20]="";

      int i ,j =0;

      printf("\n Enter a String :");
      gets(csrc);

      while (csrc[i] != '\0')
      {
          i++;
      }
    i--;

    while (i>=0)
    {
        csrc[i]= dsrc[j];
        i++;
        i--;
    }
    printf("revers string is %s : "dsrc);

    getch;

    return 0
}
