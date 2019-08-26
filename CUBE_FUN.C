#include<stdio.h>
#include<conio.h>
int cube(int);
void main()
{int a;
clrscr();
printf("enter a number");
scanf("%d",&a);
printf("Cube of %d = %d",a,cube(a));
getch();
}
int cube(int X)
{int b;
b=X*X*X;
return b;
}
