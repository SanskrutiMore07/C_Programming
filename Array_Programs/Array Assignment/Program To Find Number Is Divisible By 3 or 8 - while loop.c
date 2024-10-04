#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,No[9]={12,56,755,27,16,2,1104,65,88};

      while(i<9)
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
        i++;
    }
    getch();
    return 0;
}
