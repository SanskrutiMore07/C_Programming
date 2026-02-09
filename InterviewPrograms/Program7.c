#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name1[20] = "";
    char Name2[20] = "";
    int count =0;

    printf("Enter A Name 1 : ");
    gets(Name1);
    printf("Enter A Name 2 : ");
    gets(Name2);

    count = strcmp(Name1,Name2);

    if(count == 0)
    {
        printf("\n given Strings are Same !!!");
    }
    else
    {
        printf("\n given Strings are Not Same !!!");
    }


    getch();
    return 0;


}
