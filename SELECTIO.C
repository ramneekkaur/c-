#include<stdio.h>
#include<conio.h>
void main()
{
 int A[50],i,j,loc,n,t;
 clrscr();
 printf("Enter the size of array \n");
 scanf("%d",&n);
 printf("enter the array elements \n");
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);

 for(i=0;i<n-1;i++)
 {loc=i;
 for(j=i+1;j<n;j++)
 { if(A[loc]>A[j] )
   loc=j;
 }
 t=A[i];
 A[i]=A[loc];
 A[loc]=t;
 }
 printf("Sorted elements are \n");
 for(i=0;i<n;i++)
 printf("\n%d",A[i]);
getch();
}