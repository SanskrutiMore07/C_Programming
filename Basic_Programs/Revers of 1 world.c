#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100],revstr[100];
    int i,j,len;

     printf("\n Enter any word:");
     gets(str);

     j=0;
     len=strlen(str);

     for(i=len-1;i>=0;i--)
     {
         revstr[j++]=str[i];

     }
     revstr[i]='\0';

     printf("\n\n revers of word is=%s",revstr);

     return 0;

}
