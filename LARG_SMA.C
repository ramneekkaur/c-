#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,large,small;
clrscr();
for(i=1;i<=10;i++)
{ printf("Enter element %d :",i);
scanf("\n%d",&a[i]);
}
large=small=a[0];
for(i=1;i<=10;i++)
{
if(a[i]>large)
large=a[i];
}

for(i=1;i<=10;i++)
{if(a[i]<small)
small=a[i];
}
printf("The largest no. is %d",large);
printf("\nThe smallest no. is %d",small);
getch();
}