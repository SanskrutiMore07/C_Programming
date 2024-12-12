
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i=0,max=0,s_max=0,flag=0,arr[size];
    for(i=0; i<size; i++)
    {
        printf("\nEnter element %d=>",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if((i==0)||(arr[i]>max))
        {
            max=arr[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==max)
            {
                continue;
            }
            if((flag==0)||(arr[i]>s_max))
            {
                s_max=arr[i];
                flag=1;
            }
    }
    printf("\nmaximum number in given array is : %d.",max);
    printf("\nsecond maximum number in given array is :%d.",s_max);
    getch();
    return 0;

}
