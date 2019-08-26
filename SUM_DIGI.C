#include<stdio.h>
#include<conio.h>
void main()
{
int n,d,sum=0;
clrscr();
printf("Enter a three or more digit no.");
scanf("%d",&n);
if(n>99)
{
do{
d=n%10;
sum=sum+d;
n=n/10;}
while(n>0);
printf("SUM=%d",sum);}
else
{
printf("Please enter three or more digit numbers");
}
getch();
}

