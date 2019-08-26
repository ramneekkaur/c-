#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev,o,t,h;
clrscr();
printf("Enter the 3-digit number");
scanf("%d",&n);

o=n%10;
n=n/10;
t=n%10;
n=n/10;
h=n%10;
rev=(o*100)+(t*10)+h;
printf("\nReverse of the number is %d",rev);
 getch();
 }
