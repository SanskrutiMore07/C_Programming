#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j;
    printf("Enter Number Of Rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
