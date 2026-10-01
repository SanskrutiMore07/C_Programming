#include<stdio.h>
#include<conio.h>

int main()
{
    char Name1[20]="";
    char Name2[20]="";
    int Count =0;

    printf("\n Enter Name1:");
    gets(Name1);

    printf("\n Enter Name2:");
    gets(Name2);

    Count = strcmp(Name1,Name2);

    if(Count == 0)
    {

        printf("\n Given String Is Same!!!");

    }
    else
    {

        printf("\n Given String Is Not Same!!!");
    }

    getch();
    return 0;
}
