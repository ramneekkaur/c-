#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 int i,j,A[100],diff,B[100],n,small=0;
 clrscr();
 cin>>n;
 for(i=0;i<n;i++)
 {cin>>A[i];
 }
 /*for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {  B[k]=abs(A[i]-A[j]);
      k++;
  }
  }
  small=B[0];

 for(i=1;i<k;i++)
 { if(small>B[i])
   { small=B[i];
   }
 } */
 small=abs(A[0]-A[1]);
 for(i=0;i<n-1;i++)
 { for(j=i+1;j<n;j++)
   {
    diff=abs(A[i]-A[j]);
    if(diff<=small)
    { small=diff;}
    }
    }
 cout<<small;
 getch();

 }
