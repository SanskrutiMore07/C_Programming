///WAP Which Is Used To Accept 2 Integers From User & Display Its Addition & Subtraction///

#include<stdio.h>
#include<conio.h>

int Add(int No1,int No2)
{
    int iANS=0;
    iANS=No1+No2;
    return iANS;
}
int Sub(int No1,int No2)
{
    int iANS=0;
    iANS=No1-No2;
    return iANS;
}
int main()
{
    int iNum1,iNum2,iRes;

    printf("\n Enter Two Numbers:");
    scanf("%d%d",&iNum1,&iNum2);

    iRes=Add(iNum1,iNum2);
    printf("\n Addition Is :%d",iRes);

    iRes=Sub(iNum1,iNum2);
    printf("\n Subtraction Is :%d",iRes);

    return 0;
}
