#include<stdio.h>
#include<conio.h>

int main()
{
    int No;
    long long int Fact =0;

    printf("Enter a Number :");
    scanf("%d",&No);

        for(Fact=1;No>1;No--)
    {
        Fact=Fact*No;
    }

    printf("\n Factorial Of Given Number Is = %lld");

    getch();
    return 0;

}
