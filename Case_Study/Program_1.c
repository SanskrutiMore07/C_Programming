#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;
    char Name[40];
    int phy;
    int chem;
    int maths;
    float Total;
    float Per;
};
int main()
{
    struct stud std;
    std.Roll_No =01;
    strcpy(std.Name,"Sayali More");
    std.phy = 90;
    std.chem = 60;
    std.maths = 70;

    std.Total = std.phy + std.maths + std.chem;
    std.Per = (std.Total/300)*100;

    printf("\n Roll No of student : %d",std.Roll_No); //01
    printf("\n Name Of Student :%s",std.Name); // sayali more
    printf("\n Total Marks :%0.0f",std.Total); 
    printf("\n Percentage :%0.3f",std.Per);

    printf("\n Thanks!!!!");
    getch();
    return 0;
}
