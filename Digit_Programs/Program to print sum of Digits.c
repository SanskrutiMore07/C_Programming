#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,sum=0,Temp=0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        sum = sum+Dig;
        Temp = Temp / 10;
    }

    printf("\n Sum of given %d Number is = %d",No,sum);
    getch();
    return 0;
}
