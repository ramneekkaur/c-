#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],sum[10][10],i,j,m,n,p,q,r,c;
clrscr();
printf("Enter number of rows amd columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of first matrix\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);
  }}
printf("Enter number of rows and columns of second matrix\n");
scanf("%d%d",&p,&q);
printf("Enter the elements of second mkatrix\n");
for(i=0;i<p;i++)
{for(j=0;j<q;j++)
{scanf("%d",&b[i][j]);
}}
if(m!=p||n!=q)
{printf("The number of rows and columns of both the matrices must be equal\n");

}
r=m;
c=n;
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
	  {
sum[i][j]=a[i][j]+b[i][j];
}}
printf("The elements of resultant matrix are\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{printf("\t%d",sum[i][j]);
}
printf("\n");
}
getch();
}