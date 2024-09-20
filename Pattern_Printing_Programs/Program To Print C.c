#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,size=0;

    printf("Enter size of pattern:");
    scanf("%d",&size);

    printf("\n");
    for(i=1;i<=size;i++)
    {
        printf("\n");

        for(j=1;j<=size;j++)
        {
            if((j==1 && i!=j && i+j != size+1)||(i==1 && i!=j )||( i==size && i+j != size+1))
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
