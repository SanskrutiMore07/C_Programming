#include<stdio.h>
#include<conio.h>

int main()
{
    int No,Res=0;
    printf("\n Enter Number : \n");
    scanf("%d",&No);
    printf("************===========*************");
    Res= ~No;
    printf("\n Result => Number = %d.",Res);
    printf("\n************===========*************");
    getch();
    return 0;
}
