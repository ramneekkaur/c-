#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 int gd=DETECT,gm;
 int x1,x2,x3,y1,y2,y3,Sx,Sy,p[3][3],q[3][3],r[3][3],i,j,k;
 initgraph(&gd,&gm," ");
 printf("Enter x1,y1,x2,y2,x3,y3");
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x1,y1,x3,y3);

 printf("Enter Sx,Sy");
 scanf("%d%d",&Sx,&Sy);
p[0][0]=Sx;
p[0][1]=0;
p[0][2]=0;
p[1][0]=0;
p[1][1]=Sy;
p[1][2]=0;
p[2][0]=0;
p[2][1]=0;
p[2][2]=1;

q[0][0]=x1;
q[0][1]=y1;
q[0][2]=1;
q[1][0]=x2;
q[1][1]=y2;
q[1][2]=1;
q[2][0]=x3;
q[2][1]=y3;
q[2][2]=1;

for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  int sum=0;
  for(k=0;k<3;k++)
  {
   sum=sum+q[i][k]*p[k][j];
  }
  r[i][j]=sum;
 }
}
line(r[0][0],r[0][1],r[1][0],r[1][1]);
line(r[1][0],r[1][1],r[2][0],r[2][1]);
line(r[2][0],r[2][1],r[0][0],r[0][1]);
getch();
closegraph();
}



