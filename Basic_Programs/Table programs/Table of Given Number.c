#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0 , i =0;

    printf("\n Enter number :");
    scanf("%d",&No);

    i = 1;

    while(i <= 10)
    {
        printf("\n %d",(i*No));
        i++;
    }
    getch();
    return 0;
}
