#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,j,A[50],flag=0,last,first,val,loc;
 clrscr();
 printf("Enter the size of the array");
 scanf("%d",&n);
 printf("Enter the array elements");
 for(i=0;i<n;i++)
 { scanf("%d",&A[i]);}
 printf("Enter the value to be searched");
 scanf("%d",&val);
 first=0;
 last=n-1;

 for(i=0;i<n-2;i++)
 { if(A[i]>A[i+1])
    { int t;
    t=A[i];
    A[i]=A[i+1];
    A[i+1]=t;
    }
 }
 printf("%dSorted elements are");
 for(i=0;i<n;i++)
 {printf("%d",A[i]);}
 while((first<=last)&&(flag==0))
  {
  loc=(first+last)/2;
  if(val==A[loc])
  {flag=1;
  break;}
  else if(val<A[loc])
  {last=loc-1;
  flag=1;
  }
  else if(val>A[loc])
  {first=loc+1;
  flag=1;}
   }
   if(flag==1)
   { printf("\n Item %d was found at position %d",val,loc);
   }
   else
   printf("\nItem not found");
   }


