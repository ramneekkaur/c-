#include<stdio.h>
#include<conio.h>
void main()
{
 int t,i,A[50],n;
 clrscr();
 printf("\n Enter the size of array");
 scanf("%d",&n);
 printf("\n Enter the elements of array");
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
//for(i=0;i<n-1;i++)
//{
 for(i=0;i<n-1;i++)
 {if(A[i]>A[i+1])
  {
   t=A[i];
   A[i]=A[i+1];
   A[i+1]=t;
  }
 }
 printf("\nSorted elements are");
 for(i=0;i<n;i++)
 { printf("\n%d",A[i]);
 }
getch();
}
