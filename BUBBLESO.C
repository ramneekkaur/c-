#include<stdio.h>
#include<conio.h>
void main()
{
int array[30],n,j,i,temp;
clrscr();
printf("Enter number of element");
scanf("%d",&n);

for(i=0;i<n;i++)
{ printf("Enter integers %d : ",i+1);
scanf("%d",&array[i]);}

for(i=0;i<n;i++)
{ for(j=0;j<(n-1);j++)
{
 if(array[j]>array[j+1])
 {temp=array[j];
 array[j]=array[j+1];
 array[j+1]=temp;
 }}
 }
printf("Sorted list in ascending order is\n");
for(i=0;i<n;i++)
{
printf("\n%d",array[i]);
}
getch();
}