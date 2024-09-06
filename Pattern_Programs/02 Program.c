#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    printf("\n*****************");


    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("********************");

    getch();
    return  ;
}
