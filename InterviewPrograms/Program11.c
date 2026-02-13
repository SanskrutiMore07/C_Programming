///Program to print Space
#include<stdio.h>
#include<conio.h>

int main()
{
    int space_cnt =0,i=0;
    char csrc[20]=" ";

    printf("\n Enter A string : ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        if(csrc[i]== ' ')
        {
            space_cnt++;
        }
        i++;
    }

     printf("\nGiven string Space Cnt is = %d.",space_cnt);
    getch();
    return 0;
}
