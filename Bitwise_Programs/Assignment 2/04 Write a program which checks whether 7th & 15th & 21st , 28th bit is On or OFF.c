///Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.

#include<stdio.h>
#include<conio.h>

int main()
{

    long long int No = 0;

    printf("\n Enter A Number :");
    scanf("%d",&No);

    printf("\n==================*************====================");

    if((No>>6)&1)
    {
        printf("\n 7th bit -");
    }
    if((No>>14)&1)
    {
        printf("\n 15th bit -");
    }
    if((No>>20)&1)
    {
        printf("\n 21th bit -");
    }
    printf(" Of Given Number %d is On.",No);

    printf("\n==================*************====================");
    getch();
    return 0;
}
