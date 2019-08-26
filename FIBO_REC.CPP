#include<stdio.h>
#include<conio.h>
int Fibonacci(int);
void main()
{ int n,i=0,c;
clrscr();
printf("Enter terms of fibonacci series");
scanf("%d",&n);
printf("\nFibonacci Series\n");
for(c=1;c<=n;c++)
{printf("%d",Fibonacci(i));
i++;
}
getch();
}
int Fibonacci(int x)
{
if(x==0)
return 0;
else if(x==1)
return 1;
else return(Fibonacci(x-1)+Fibonacci(x-1));
}

