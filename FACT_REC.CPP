#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int a;
clrscr();
printf("Enter a number");
scanf("%d",&a);
if(a<0)
{printf("Please enter correct values");
}
else
{printf("%d!=%d",a,fact(a));
}
getch();
}
int fact(int b)
{
if(b==0||b==1)
{return 1;
}
else
return b*fact(b-1);
}



