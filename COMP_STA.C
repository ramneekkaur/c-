#include<stdio.h>
#include<conio.h>
void main()
{
int i=10;
clrscr();
printf("In main i=%d\n",i);
{int i=20;
printf("%d",i);
i++;
printf("%d",i);
}
printf("%d",i);
getch();
}