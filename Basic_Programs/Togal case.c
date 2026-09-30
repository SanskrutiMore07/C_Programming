#include<stdio.h>
#include<conio.h>

int main()
{
   int  i = 0;
    char ch = "";

    printf("\n Enter String :");
    scanf("%s",ch);

    while(ch[i]!='\0')
    {
        if(ch [i]>='A'&& ch<='Z')
        {
            ch[i] = ch[i]+32;
        }
        else if(ch[i] >='a'&& ch [i]<='z')
        {
            ch[i] = ch-32;
        }
        i++;
    }

    printf("\n After Toggle case string is :%s",ch);
    getch();
    return 0;
}
