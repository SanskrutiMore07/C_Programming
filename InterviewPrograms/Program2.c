#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1 ,fact = 1 ,No = 0;

    printf("\n Enter A Number To Find Factorial : ");
    scanf("%d",&No);
    for( i=1; i<=No;i++)
    {
            fact = fact*i;
    }
    printf("\n Factorial Of Given Number : %d",fact);
    getch();
    return 0;

}
