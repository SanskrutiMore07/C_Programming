#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("\n Enter a number : ");
    scanf("%d%d",&a,&b);

    a= a+b; //10+20=30
    b= a-b; //30-20=10
    a= a-b; //30-10=20

    printf("\n Swapping Number = %d,%d",a,b);
    getch();
    return 0;
}
