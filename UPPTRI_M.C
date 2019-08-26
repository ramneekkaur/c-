#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,n;
clrscr();
printf("Enter the size of the matrix\n");
scanf("%d",&n);
printf("Enter the elements of the matrix\n");
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("Matrix is\n");
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("\nUpper triangle is:\n");
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{if(j>=i)
{printf("\t%d",a[i][j]);}
else {printf("\t ");}
}
printf("\n");
}
getch();
}