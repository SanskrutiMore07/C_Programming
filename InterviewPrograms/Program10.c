#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char csrc[20]="";
    char cdest[20]="";
    int i=0 ,j=0;

    printf("\n Enter A String To Find Given String Is Palindrome Or Not : ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        i++;
    }
    i--;

    while(i>=0)
    {
        cdest[j] = csrc[i];
        i--;
        j++;

    }

    printf("Entered String is : %s \n",csrc);
    printf("Reversed String is :%s \n",cdest);

    if(strcmp(cdest,csrc)==0)
    {
        printf("\n Given String Is Palindrome");
    }
    else
    {
         printf("\n Given String Is Not Palindrome");

    }

    getch();
    return 0;
}
