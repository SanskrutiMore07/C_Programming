#include<stdio.h>
#include<conio.h>

int main()
{
    int No,i,j=0;

    printf("\nEnter Any Number To Print Pattern:");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        for(j=No;j>=1;j--)
        {
            printf("%-3d", j );
        }
        printf("\n");
    }
    getch();
    return 0;
}
