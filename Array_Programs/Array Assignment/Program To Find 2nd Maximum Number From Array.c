
//Find Maximum Element in that array.//
#include<stdio.h>
#include<conio.h>

#define size 8

int main()
{
    int Arr[] = {12,58,65,85,35,75,6,24} , i = 0 ,max = 0,s_max=0,flag=0;

    printf("\n Display The Array elements \n");

    for( i = 0 ; i <size ; i++)
    {
        printf("\n Element Of %d Array = %d", i , Arr[i]);
    }

    printf("\n Press Any To Continue !!!!\n");
    getch();
    for(i=0;i<size;i++)
    {
        if((i==0)||(Arr[i]>max))
        {
            max=Arr[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(Arr[i]==max)
        {
            continue;
        }
        if((flag==0)||(Arr[i]>s_max))
        {
            s_max=Arr[i];
            flag=1;
        }
    }
    printf("\n The Maximum Element In That Array = %d ",max);

    printf("\n The  2nd Maximum Element In That Array = %d ",s_max);

    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}


