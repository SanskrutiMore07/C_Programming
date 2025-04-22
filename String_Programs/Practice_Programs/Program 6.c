#include<stdio.h>
int main()
{

    char str[20]="Fork  Infosystem";
    str[4] = 'b';
    int i =0;
    while(str[i]!= '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
