#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,ZCnt=0,Temp=0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            ZCnt++;
        }
        Temp = Temp / 10;
    }

    printf("\n Count of zero's in %d is = %d",No,ZCnt);
    getch();
    return 0;

}
