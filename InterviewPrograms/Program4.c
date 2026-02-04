///Swap To Numbers Without Temp.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 =0 ,No2 = 0;

    printf("\n Enter Number 1 : ");
    scanf("%d",&No1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&No2);

    No1 = No1+No2;
    No2 = No1-No2;
    No1 = No1-No2;

    printf("\The Number : %d & %d.",No1,No2);


    getch();
    return 0;


}
