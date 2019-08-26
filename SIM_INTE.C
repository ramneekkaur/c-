#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t;
float SI;
clrscr();
printf("Enter the values of principle,rate,time respectively\n");
scanf("%d%d%d",&p,&r,&t);
if(p<=0||r<=0||t<=0)
{printf("Enter non-zero positive values");
}


else{ SI=(p*r*t)/100;
printf("\nSimple Interest is%f",SI);   }
getch();
}