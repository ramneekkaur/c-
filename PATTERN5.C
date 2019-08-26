#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=9,b=1;
clrscr();
for(i=1;i<=8;i++)
{for(j=1;j<=9;j++)
{
if(j<=10-i)
{
if(i%2==1)
{printf("%d",a--);}
else{printf("%d",b); }
}
else{printf(" ");}
}
printf("\n");
(i%2==1)?(a=9):(b=b+2);
}
getch();
}
