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

    printf("\n\n Enter Student Details =>");

    printf("\n Enter Student Roll Number : ");
    scanf("%d",&std.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name : ");
    gets(std.Name);

    printf("\n Enter Physic Marks : ");
    scanf("%d",&std.phy);

    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&std.chem);

    printf("\n Enter Maths Marks : ");
    scanf("%d",&std.maths);


    std.Total = std.phy + std.maths + std.chem;
    std.Per = (std.Total/300)*100;

    printf("\n Enter Any Key To Go Ahead ->");
    getch();

    printf("\n=========================********************=====================");

    printf("\n\n Entered Student Details Are :-");


    printf("\n\n\t Roll No of student : %d",std.Roll_No);
    printf("\n\n\t Name Of Student :%s",std.Name);
    printf("\n\n\t Physic Marks : %d",std.phy);
    printf("\n\n\t Chemistry Marks : %d",std.chem);
    printf("\n\n\t Maths Marks : %d",std.maths);
    printf("\n\n\t Total Marks :%0.0f",std.Total);
    printf("\n\n\t Percentage :%0.3f",std.Per);

    printf("\n=========================********************=====================");

    printf("\n Thanks!!!!");
    getch();
    return 0;
}
