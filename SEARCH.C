#include<stdio.h>
#include<conio.h>
void main()
{int a[100],i,n,j,s;
clrscr();
printf("Enter size of an array");
scanf("%d",&n);

for(i=0;i<n;i++)
{printf("Enter element %d :",i+1);
scanf("%d",&a[i]);
}
printf("Enter a number which is to be searched");
scanf("%d",&s);
for(i=0;i<n;i++)
{if(s==a[i])
break;}
if(i<n)
{printf("%d found at location %d",s,i+1);}
else
{printf("Element does not exist in this array");}

getch();
}