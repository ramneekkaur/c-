#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n;
clrscr();
printf("Enter a number");
scanf("%d",&n);
printf("Factorial of %d is %d",n,fact(n));
getch();
}
int fact(int X)
{int i,fact=1;
 for(i=1;i<=X;i++)
 { fact=fact*i;
 }
 return fact;
 }