#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char csrc[20] ="";
    int i =0;

    printf("\n Enter A String : ");
    gets(csrc);

    while(csrc[i] != '\0')
    {
        i++;
    }
    printf("\n Length Of Given String Is :%d",i);

    getch();
    return 0;
}
