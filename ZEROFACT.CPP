#include<iostream.h>
#include<conio.h>
void main()
{ int T,i;
  long long int M,N,D,F,sum,j;
  clrscr();
  cin>>T;
  for(i=0;i<T;i++)
  {sum=0;
   cin>>N;
   j=N;
   while(j>=5)
   {j=j/5;
   sum=sum+j;

   }
   cout<<sum<<"\n";
   }
getch();
}