#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for(i=1;i<=7;++i)
    {

        for(j=1;j<=7;++j)
        {
            if(i==1 ||i==4 ||i==7|| (j==1 && j<=6) ||j==7)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
                printf("\n");
    }
    getch();
    return 0;
}

