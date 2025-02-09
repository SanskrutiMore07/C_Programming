#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 24, i = 0 ;
    printf("\n=======================");
    printf("\n Table of 24 : ");
    i = 1;

    while(i <= 10 )
    {
        printf("\n %d",(i * No));
        i++;
    }
    printf("\n==========================\n");
    getch();
    return 0;
}
