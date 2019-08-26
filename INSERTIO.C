#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,A[20],hole,value;
 clrscr();
 printf("Enter the array size\n");
 scanf("%d",&n);
 printf("Enter the elements of array\n");
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);

 for(i=0;i<n;i++)
 { hole=i;
  value=A[i];
  while((hole>0)&&A[hole-1]>value)
  { A[hole]=A[hole-1];
  hole=hole-1;
  }
  A[hole]=value;
  }
  printf("Sorted elements are \n");
  for(i=0;i<n;i++)
  printf("\n%d",A[i]);
 getch();
 }
