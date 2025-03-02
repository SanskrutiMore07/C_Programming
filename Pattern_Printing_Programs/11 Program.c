#include<stdio.h>
#include<conio.h>

int main()
{
    int No,i,x,j=0;

    printf("\nEnter Any Number To Print Pattern:");
    scanf("%d",&No);

    for(i=1,x=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            printf("%-3d", x );
            x++;
        }
        printf("\n");
    }
    getch();
    return 0;
}

