#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,No=0;

    printf("\n Enter Any Number To Print Pattern : ");
    scanf("%d",&No);

    for(i = 1;i<=No;i++)
    {
        for(j= No;j>=i;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
