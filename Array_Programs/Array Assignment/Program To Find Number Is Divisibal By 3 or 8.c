#include<stdio.h>
#include<conio.h>

int main()

{
    int i,No[9]={12,56,755,27,16,2,1104,65,88};

    for(i=0;i<9;i++)
    {
        if(No[i] %3 == 0 && No[i] % 8 ==0)
        {
            printf("\n %d is divisible by 3 & 8 ",No[i]);
        }
        else if(No[i] %3 == 0)
        {
            printf("\n %d is divisible by 3 ",No[i]);
        }
        else if(No[i] % 8 ==0)
        {
            printf("\n %d is divisible by 8 ",No[i]);
        }
        else
        {
            printf("\n %d is not divisible by 3 & 8 ",No[i]);
        }
    }
    getch();
    return 0;
}
