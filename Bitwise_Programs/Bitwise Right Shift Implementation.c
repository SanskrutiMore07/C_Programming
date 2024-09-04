#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2,Res=0;
    printf("\n Enter Two Numbers : \n");
    scanf("%d%d",&No1,&No2);
    printf("************===========*************");
    Res=No1 >> No2;
    printf("\n Result =>%d >> %d = %d.",No1,No2,Res);
    printf("\n************===========*************");
    getch();
    return 0;
}
