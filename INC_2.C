#include<stdio.h>
#include<conio.h>
void main()
{
float years,sec;
int success;
clrscr();
printf("Input your age");
success=scanf("%f",&years);
if(success==0)
{
printf("The input is not float");
}
else
printf("The input is float");
getch();
}