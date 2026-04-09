///Convert To Lower Case

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;
   char cSrc[20]=" ";

   printf("\n Enter A String : ");
   gets(cSrc);

   while(cSrc[i] != '\0')
   {
       if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
       {
           cSrc[i] = cSrc[i]+32;
       }
       i++;
   }

   printf( " \n Converted String Is : %s",cSrc);
   getch();
   return 0;
}
