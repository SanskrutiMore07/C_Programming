///Swapping Two Numbers Using Temp .

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,Temp;

    printf("\n Enter Two Numbers : ");
    scanf("%d%d",&a,&b);

    Temp = a;
    a = b;
    b = Temp;

    printf("\n Swapping  Numbers = %d and %d",a,b);

    getch();
    return 0;
}
