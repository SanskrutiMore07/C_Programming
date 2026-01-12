#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, No;

    printf("\n Enter Any Number To print Pattern : ");
    scanf("%d", &No);

    for(i = 1; i <= No; i++)
    {
        for(j = 1; j <= No; j++)
        {
            if(j >= No - i + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
