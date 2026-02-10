#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char csrc[20] = "";
    char cdest[20] = "";

    printf("Enter A String : ");
    gets(csrc);

    strcpy(cdest,csrc);

    printf("\n given String Is: %s",csrc);
    printf("\n Copied String Is: %s",cdest);


    getch();
    return 0;


}
