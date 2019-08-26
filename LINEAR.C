#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,val,A[50];
 clrscr();
 printf("Enter the array size");
 scanf("%d",&n);
 printf("Enter the array elements");
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 printf("Enter the value to be searched");
 scanf("%d",&val);
 for(i=0;i<n;i++)
 {
  if(A[i]==val)
  {
   printf("%n Value %d is searched at position %d",val,i+1);
  }
 }
 getch();
}