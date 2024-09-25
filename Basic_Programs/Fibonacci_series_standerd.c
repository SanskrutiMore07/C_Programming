#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt = 0 ,N1=1 ,N2=0, N3=0;

up:
    printf("\n enter count to print fibonacci series =");
    scanf("%d",&cnt);
    if(cnt <= 0)
    {
        printf("\n  invalid count, enter positive number");
        goto up;
    }
    printf("\n fibonacci series is =");

    while (cnt>0)
    {
        printf(" %d",N3);

        N3 = N1+N2;
        N1=N2;
        N2=N3;
        cnt--;

    }
    printf("\n thanks");
    getch();
    return 0;
}
