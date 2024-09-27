#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,DCnt=0,Temp=0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Temp= Temp / 10;
        DCnt++;
    }
    printf("\n Count of digit in %d = %d",No,DCnt);
    getch();
    return 0;
}
