#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[50],p,flag=0;
clrscr();
printf("Enter the size of an array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("Enter the element %d : ",i+1);
  scanf("%d",&a[i]);
      }
printf("Enter the searched element");
scanf("%d",&p);

for(i=0;i<n;i++)
{ if(a[i]==p)
   {flag=1;

   break;
   }

  }

if(flag==1)
{ printf("Searched element %d found at position %d",a[i],i+1);
 }
else
{printf("Element is not found");}

getch();
}