#include<stdio.h>
#include<conio.h>

int main()
{
    char csrc[20]="";
    char dest[20]="";
    int  i =0,j =0;

    printf("Enter a string : ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        i++;

    }
    i--;

    while(i>=0)
    {
        dest[j]= csrc[i];
        i--;
        j++;
    }

    printf("\nGiven string is :%s",csrc);
    printf("\nReversed string is :%s",dest);

    if(strcmp(csrc,dest)==0)
    {
        printf("\nIt is palindrome");
    }
    else
    {

        printf("\nIt is not palindrome");
    }

    getch();
    return 0;
}
