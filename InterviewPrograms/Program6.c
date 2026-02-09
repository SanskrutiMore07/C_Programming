///Revers String

#include<stdio.h>
#include<conio.h>

int main()
{
    char csrc[20]=" ";
    char cdest[20]=" ";

    int i =0,j=0;

    printf("\nEnter A String:  ");
    gets(csrc);

    while(csrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(i>=0)
    {
        cdest[j]=csrc[i];
        i--;
        j++;
    }


    printf("Entered String is : %s \n",csrc);
    printf("Reversed String is :%s \n",cdest);


    getch();
    return 0;
}
