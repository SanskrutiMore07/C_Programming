/// Program To Check whether 7th & 8th & 9th bit is ON or OFF.
#include<stdio.h>
#include<conio.h>

int main()
{

    int No = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    printf("\n==================*************====================");

    if((No>>6)&1)
    {
        printf("\n 7th bit -");
    }
    if((No>>7)&1)
    {
        printf("\n 8th bit -");
    }
    if((No>>8)&1)
    {
        printf("\n 9th bit -");
    }
    printf(" Of Given Number %d is On.",No);

    printf("\n==================*************====================");
    getch();
    return 0;
}
