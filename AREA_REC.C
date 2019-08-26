#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,A,P;
clrscr();
printf("Enter the values of length and breadth of rectangle\n");
scanf("%d%d",&l,&b);
if(l<=0||b<=0)
{printf("Enter the positive non-zero values");
}
else {A=l*b;

printf("\nArea of rectangle is%d",A);
 P=2*(l+b);
printf("\nPerimeter of rectangle is%d",P);}
getch();
}