#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n;
clrscr();
printf("Enter rows and columns\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of first matrix\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("\t%d",(*(a+i)+j));
}
printf("\n");
}
printf("Enter the elments of second matrix\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("\t%d",(*(b+i)+j));
}
printf("\n");
}
printf("\nAddition of matrix:\n");
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
printf("\t%d",*(*(c+i)+j));
}
printf("\n");
}
getch();
}