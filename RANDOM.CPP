#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{ randomize();
 int c=0,a,b,n,j,num,p,m,A[50],sum=0;
 clrscr();
 cout<<"Enter a";
 cin>>a;
 cout<<"Enter b";
 cin>>b;
 n=a-b;

 while(n!=0)
 {
  n=n/10;
  c++;
   }

   j=c-1;
   while(n>0 &&j>0)
   {
    A[j]=num%10;
    num=num/10;
    j--;
   }

  A[c-1]=random(A[c-1]);
  j=0; p=c;
  while(j<c)
  {

   num=A[j]*pow(10,p-1);
   sum=sum+10;
   j++;
   p--;
  }
  cout<<sum;
getch();
}
