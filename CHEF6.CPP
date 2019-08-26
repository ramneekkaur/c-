#include<iostream.h>
#include<conio.h>
void main()
{
 int T,n,k,i,j,p,l;
 int long A[100];
 clrscr();

 cin>>T;
 for(l=1;l<=T;l++)
 {
 cin>>n;
 for(i=1;i<=n;i++)
 {
 cin>>A[i];
 }
 cin>>k;
 p=A[k];

  for(i=1;i<=n-1;i++)
   {for(j=i+1;j<=n;j++)
   {
    if(A[i]>A[j])
    {
     int t;
     t=A[i];
     A[i]=A[j];
     A[j]=t;
    }
   }    }

   for(i=1;i<=n;i++)
   {cout<<A[i];
   }

 for(i=1;i<=n;i++)
 {
  if(A[i]==p)
  {
   cout<<endl<<i;
  }
 }
 }
getch();
}


