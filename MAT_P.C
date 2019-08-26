#include<stdio.h>
#include<conio.h>
void main()
{int i,j,a[10][10],b[10][10],prod[10][10],m,n,p,q,r,c,k;
clrscr();
printf("Enter the number of rows and columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of first matrix\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);
}
}
printf("Enter the number of rows and columns of second matrix\n");
scanf("%d%d",&p,&q);
printf("Enter the elements of second matrix\n");
for(i=0;i<p;i++)
{for(j=0;j<q;j++)
{scanf("%d",&b[i][j]);
}}
if(n!=p)
{printf("The number of columns in first matrix must be equal to number of rows in second matrix");
}
r=m;
c=q;
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{prod[i][j]=0;
for(k=0;k<c;k++)
{prod[i][j]+=a[i][k]*b[k][j];
}}
}
printf("\nThe elements of product matrix-->\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",prod[i][j]);
}
printf("\n");
}
getch();
}
