#include<stdio.h>
#include<conio.h>

int main()
{

    int No=0, Dig = 0, Sum = 0, Temp =0;

    printf("Enter  a number to find sum: \n");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0 )
    {
        Dig = Temp % 10;
        Sum = Sum + Dig;
        Temp = Temp / 10;

    }

    printf("Sum of given Number %d Is :%d",No,Sum);

    getch();
    return 0;
}
