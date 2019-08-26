#include<stdio.h>
#include<conio.h>
void main()
{int a[10][10],i,j,s1=0,s2=0,n;
clrscr();
printf("Enter the size of the matrix\n");
scanf("%d",&n);
printf("Enter the elements of matrix\n");
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{scanf("%d",&a[i][j]);
}}
printf("Matrix is\n");
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{printf("\t%d",a[i][j]);
}
s1=s1+a[i][i];
s2=s2+a[i][n+1-i ];
printf("\n");
}
printf("Diagonals are\n");
for(i=1;i<=n;i++)
{printf("\t%d",a[i][i]);
}
printf("\n");

for(i=1;i<=n;i++)
{printf("\t%d",a[i][n+1-i]);
}
printf("\n Sum of diagonal 1:%d\n sum of diagonal 2:%d",s1,s2);
getch();
}


