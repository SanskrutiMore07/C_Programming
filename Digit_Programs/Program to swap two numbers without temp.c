#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("\n Enter Two Numbers :");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n Swapping Of Given Numbers = %d , %d",a,b);
    return 0;
}
