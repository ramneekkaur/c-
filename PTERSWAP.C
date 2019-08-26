#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
void main()
{int a,b;
clrscr();
printf("Enter the value of 'a'\n");
scanf("%d",&a);
printf("Enter the value of 'b'\n");
scanf("%d",&b);
swap(&a,&b);
printf("After swapping\n");
printf("a is %d\n",a);
printf("b is %d",b);
getch();
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
