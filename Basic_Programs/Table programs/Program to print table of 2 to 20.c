#include<stdio.h>
#include<conio.h>s
int main()
{
    int R=0,C=0;
    printf("\n=======================\n\n");
    for(R=1;R<=10;R++)
    {
        for(C=2;C<=20;C++)
        {
            printf("%-4d",R * C);
        }
        printf("\n\n");

    }

    printf("\n==========================\n");
    getch();
    return 0;
}
