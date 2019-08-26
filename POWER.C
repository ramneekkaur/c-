#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,p=1;
clrscr();
printf("Enter the base");
scanf("%d",&x);
printf("Enter the base");
scanf("%d",&y);
if(y>0)
{
for(i=1;i<=y;i++)
{
p=p*x;
}
printf("%d to the power %d is %d\n",x,y,p); }
else
{
printf("Please enter the positive power\n");
}
getch();
}