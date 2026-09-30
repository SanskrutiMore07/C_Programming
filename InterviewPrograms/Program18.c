#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0 , No = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
