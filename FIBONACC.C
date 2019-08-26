#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,n,c,count;
clrscr();
printf("Enter a number till where you want tu Fionacci series");
scanf("%d",&n);
if(n>0)
{
printf("The series is");
printf("%d %d",a,b);
count=2;
while(count<n)
{c=a+b;
a=b;
b=c;
printf(" %d",c);
count++;}}
else
{printf("Please enter positive terms\n");
}
getch();}
