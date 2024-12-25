#include<stdio.h>
int main()
{
    int first,second, temp;
    printf("\n Enter First Number:");
    scanf("%d",&first);
    printf("\n Enter Second Number :");
    scanf("%d",&second);

    temp = first;
    first = second;
    second= temp;

    printf("\n After swapping first number = %d\n",first);
    printf("\n After swapping second number = %d\n",second);

    return 0;
}
