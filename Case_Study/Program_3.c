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
    int i=0;
    struct stud std[3] ={};

    printf("\n\n Enter Student Details =>");

    for(i=0;i<3;i++)
    {

    printf("\n Enter Student Roll Number : ");
    scanf("%d",&std[i].Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name : ");
    gets(std[i].Name);

    printf("\n Enter Physic Marks : ");
    scanf("%d",&std[i].phy);

    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&std[i].chem);

    printf("\n Enter Maths Marks : ");
    scanf("%d",&std[i].maths);


    std[i].Total = std[i].phy + std[i].maths + std[i].chem;
    std[i].Per = (std[i].Total/300)*100;

    }
    printf("\n Enter Any Key To Go Ahead ->");
    getch();

    printf("\n=========================********************=====================");

    printf("\n\n Entered Student Details Are :-");

    for(i=0;i<3;i++)
{

    printf("\n\n\t Roll No of student : %d",std[i].Roll_No);
    printf("\n\n\t Name Of Student :%s",std[i].Name);
    printf("\n\n\t Physic Marks : %d",std[i].phy);
    printf("\n\n\t Chemistry Marks : %d",std[i].chem);
    printf("\n\n\t Maths Marks : %d",std[i].maths);
    printf("\n\n\t Total Marks :%0.0f",std[i].Total);
    printf("\n\n\t Percentage :%0.3f",std[i].Per);
}
    printf("\n=========================********************=====================");

    printf("\n Thanks!!!!");
    getch();
    return 0;
}
