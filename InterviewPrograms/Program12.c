#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0,v_cnt =0;
    char Csrc[20]="";

    printf("\n Enter A String : ");
    gets(Csrc);

    while(Csrc[i] != '\0')
    {
        if(Csrc[i]=='a'||Csrc[i]=='A'||Csrc[i]=='e'||Csrc[i]=='E'||Csrc[i]=='i'||Csrc[i]=='I'||Csrc[i]=='o'||Csrc[i]=='O'||Csrc[i]=='u'||Csrc[i]=='U')
        {
            v_cnt++;
        }
        i++;
    }

    printf("\n Count Of Vowels In Given String Is : %d",v_cnt);

    getch();
    return 0;
}
