#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\n Enter any two numbers ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is Maximum ",a );
    }
    if(b>a)
    {
        printf("%d is Maximum",b);
    }
    if (a==b)
    {
        printf("\n Both are equal");
    }
    getch();
    return 0;
}
