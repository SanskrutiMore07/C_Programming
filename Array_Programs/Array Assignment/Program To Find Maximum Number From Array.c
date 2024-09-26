//Find Maximum Element in that array.//
#include<stdio.h>
#include<conio.h>

#define size 8

int main()
{
    int Arr[] = {12,58,65,85,35,75,6,24} , i = 0 ,Max = 0;

    printf("\n Display The Array elements \n");

    for( i = 0 ; i <size ; i++)
    {
        printf("\n Element Of %d Array = %d", i , Arr[i]);
    }

    printf("\n Press Any To Continue !!!!\n");
    getch();

    for( i = 0 ; i < size ; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }

    printf("\n The Maximum Element In That Array = %d ",Max);

    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}
