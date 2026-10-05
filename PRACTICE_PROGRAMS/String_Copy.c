#include<stdio.h>
#include<conio.h>

int main()
{
    char csrc[20] ="";
    char dest[20] ="";

    printf("Enter String :");
    gets(csrc);

    strcpy(dest,csrc);

    printf("\n Given String Is : %s",csrc);
    printf("\n Copied String Is : %s",dest);

    getch();
    return 0;

}
