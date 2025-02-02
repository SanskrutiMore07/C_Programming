#include<stdio.h>
#include<conio.h>

int Book_Read();

int main()
{

    int R_Pages = 0, Total_Pages = 0 ,Day_Cnt = 0;
    printf("\n Enter Total Number Of Pages : ");
    scanf("%d",&Total_Pages);

    while(R_Pages <Total_Pages)
    {
        R_Pages = Book_Read();
        Day_Cnt++;
        printf("\n Pages Read By Day %d = %d \n",Day_Cnt,R_Pages);
        getch();
    }

    printf("\n Congrats you Have Completed Book in %d Days.",Day_Cnt);

    getch();
    return 0;

}
int Book_Read()
{
    static int Res = 10;
    int PCnt = 0;

    printf("\n How May Pages Read Today : ");
    scanf("%d",&PCnt);

    Res = Res+PCnt;

    return Res;
}


