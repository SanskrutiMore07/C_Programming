
#include<stdio.h>
int main()
{
    int n,a,i,j;
    printf("\n Enter no of rows: ");
    scanf("%d",&n);

    for( i=1;i<=n;i++)
    {
        for( j=1; j<=i;j++)
        {
            printf("%d",a);
            a=a+2;
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
