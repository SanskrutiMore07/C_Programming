#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , No1 = 0 , No2 = 1, No3 =0 ,i =0;

    printf("\n Enter An Number :");
    scanf("%d",&Num);

    for(i = 1; i<=Num;i++)
    {
        printf("\n %d",No1);

        No3 = No1+No2;
        No1 = No2;
        No2 = No3;
    }
    getch();
    return 0;
}
