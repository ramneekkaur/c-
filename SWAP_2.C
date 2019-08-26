#include<stdio.h>
#include<conio.h>
void main()
{
int A,B;
clrscr();
printf("Enter the value of A");
scanf("%d",&A);
printf("Enter the value of B");
scanf("%d",&B);
B=A+B-(A=B);
printf("Swapped values of i and j : %d and %d",A,B);
getch();
}