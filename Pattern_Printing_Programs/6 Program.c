#include<stdio.h>
#include<conio.h>

    int main()
{
    int i,j;

    printf("\n ************************\n\n");
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%c",j+64);
            }
                printf("\n");
        }
    printf("\n ************************");
    getch();
    return 0;
}

