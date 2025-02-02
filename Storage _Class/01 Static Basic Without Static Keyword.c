#include<stdio.h>
#include<conio.h>

int Book_Read();

int main()
{

    int No = 0;

    No = Book_Read();
    printf("\n Pages Read By Day 1 = %d \n",No);

    No = Book_Read();
    printf("\n Pages Read By Day 2 = %d \n",No);

    No = Book_Read();
    printf("\n Pages Read By Day 3 = %d \n",No);

    getch();
    return 0;

}
int Book_Read()
{
    int Res = 10;
    int PCnt = 0;

    printf("\n How May Pages Read Today : ");
    scanf("%d",&PCnt);

    Res = Res+PCnt;

    return Res;
}


