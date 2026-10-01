#include<stdio.h>
#include<conio.h>

int main()
{

    char csrc[20]="";
    char dest[20]="";
    int i=0,j=0;

    printf("Enter A String :");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        i++;
    }
    i--;

    while(i >=0)
    {S
        dest[j] = csrc[i];

        i--;
        j++;
    }
    //dest[i]='\0';

    printf(" \n Given string is: %s",csrc);
    printf(" \n Revers String Is : %s",dest);

    getch();
    return 0;
}
