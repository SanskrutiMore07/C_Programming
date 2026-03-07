#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0, C_cnt =0;
    char Csrc[20]=" ";

    printf("\n Enter A String : ");
    gets(Csrc);

    while(Csrc[i] != '\0')
    {
        if(Csrc[i] >='A' && Csrc[i] <='Z')
        {
            C_cnt++;
        }
        i++;
    }
    printf("\n  Count Of Capital Letters :%d",C_cnt);

    getch();
    return 0;
}
