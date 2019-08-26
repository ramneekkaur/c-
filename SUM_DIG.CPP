#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum,o,t,h;
clrscr();
printf("Enter the 3-digit number");
scanf("%d",&n);
o=n%10;
n=n/10;
t=n%10;
n=n/10;
h=n%10;

sum=o+t+h;
printf("Sum of digits of the number%d",sum);
getch();
}