#include<stdio.h>
#include<conio.h>
void main()
{
int n,e,o;
clrscr();
printf("Enter a number");
scanf("%d",&n);
if(n<=0)
{printf("Enter non-zero positive number");
}
if(n%2==0&&n>0)
{printf("Number is even i.e.%d",n);
}
else {printf("Number is odd i.e.%d",n);}
getch();
}