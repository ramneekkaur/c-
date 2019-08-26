#include<stdio.h>
#include<conio.h>
void main()
{
 int x[10],top=0,ch,i,item,data,size=10;
 x1:
 clrscr();
 printf("Enter your choice:\n1. Push\n2. Pop\n3. Traverse \n4.Exit \n");
 scanf("%d",&ch);
 clrscr();
 switch(ch)
 {
 case 1: printf("Enter the item to pushed");
	 scanf("%d",&item);
	 if(top==size)
	 {
	  printf("Overflow\n");
	  getch();
	  }
	  else
	  { x[top]=item;
	    top++;
	    }
	    goto x1;

 case 2: if(top==0)
 printf("Underflow\n");
 else
 { data=x[top-1];
   printf("%d is popped\n",data);
   top--;
 }
getch();
goto x1;

case 3: if(top==0)
	{
	printf("Stack is empty\n");
	getch();
	}
	else
	{
	for(i=top-1;i>=0;i--)
	{
	 printf("%d\n",x[i]);
	}
	getch();
	}
	goto x1;

case 4:break;
default: printf("Enter the correct choice");
	 getch();
	 goto x1;
  }
}