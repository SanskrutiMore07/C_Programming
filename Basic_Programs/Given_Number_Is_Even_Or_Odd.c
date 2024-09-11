 #include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("\n enter any number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is even number ",num);
    else
        printf("%dis odd number ",num);
    getch();
    return 0;
}
