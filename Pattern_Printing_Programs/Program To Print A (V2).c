#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    printf("\n");
    for(i=1;i<=5;++i)
    {
        printf("\n");

        for(j=1;j<=5;++j)
        {
            if((j==1 && i != j)||(j == 5 && i+j> 5+1)|| (i == 1 && i != j && i+j != 5+1) || i == (5/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }

        }
                printf("\n");
    }
    getch();
    return 0;
}
