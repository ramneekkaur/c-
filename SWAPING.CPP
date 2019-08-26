#include<stdio.h>
#include<conio.h>
void main()
{
int &i,j;
clrscr();
printf("enter the value of i");
scanf("%d",&i);
printf("Enter the value of j");
scanf("%d",&j);
i=j;
j=i;
printf("Value of i & J is%d%d",i,j);
getch();
}