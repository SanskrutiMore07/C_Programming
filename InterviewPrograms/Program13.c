#include<stdio.h>
#include<conio.h>

int main()
{
    int S_cnt = 0;
    int i =0;
    char Csrc[20]=" ";

    printf("\n Enter A String : ");
    gets(Csrc);

    while(Csrc[i] != '\0')
    {
       if(Csrc[i] >= 'a' && Csrc[i] <= 'z')
       {
          S_cnt++;
       }
       i++;
    }
    printf("\n Count Of Small Letters IS :%d",S_cnt);

    getch();
    return 0;
}
