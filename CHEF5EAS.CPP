#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,n,k=0,A[1000],B[1000],m,t,p;
 clrscr();
 cin>>t;
 for(p=0;p<t;p++)
 {
    cin>>n>>m;
    for(i=1;i<=m;i++)
    { cin>>A[i];
    }
    for(i=1;i<=n;i++)
    {      int flag=0;
    for(j=1;j<=m;j++)
      { if(i==A[j])
	{
	  flag=1;
	 }}
	 if(flag!=1)
	 {
	 B[k]=i;
	 k++;
	  }

      }
    for(k=0;k<n-m;k+=2)
    {
       cout<<B[k]<<" ";
    }
    cout<<endl;
    for(k=1;k<n-m;k+=2)
    {cout<<B[k]<<" ";
    }

 }
 getch();
 }