#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#define MAX 100


int top,stack[100];
void push(int stack[],int val,int &top);
int pop(int stack[],int &top);
void show_stack(int stack[],int top);

void main()
{ clrscr();
int val,choice;
char opt='Y';
top=-1;
do
{ cout<<"\n\t\t Main Menu";
cout<<"\n\t\t1.Addition of stack";
cout<<"\n\t\t2.Deletion of stack";
cout<<"\n\t\t3.Traverse of stack";
cout<<"\n\t\t4.Exit from menu";
cout<<"\n\nEnter your choice from above";
cin>>choice;
switch(choice)
{ case 1:do
	 {
	 cout<<"Enter the value to be added in the stack";
	 cin>>val;
	 push(stack,val,top);
	 cout<<"Do you want to add more elements<Y/N>";
	 cin>>opt;
	 }while(toupper(opt)=='Y') ;
	 break;
  case 2:opt='Y';
	 do
	 {
	 val=pop(stack,top);
	 if(val!=-1)
	 {cout<<"Deleted value from stack is"<<val; }
	 cout<<"\nDo you want to delete more elements<Y/N>";
	 cin>>opt;
	 }while(toupper(opt)=='Y');
	 break;
  case 3:show_stack(stack,top);
	 break;
  case 4:exit(0);

  }}while(choice!=4);
  getch();
  }

void push(int stack[],int val,int &top)
{
if(top==MAX-1)
{cout<<"Stack is full";}
else
 top=top+1;
 stack[top]=val;
}

int pop(int stack[],int &top)
{int value;
if(top<0)
{cout<<"Stack is empty";
    value=-1; }
else
{value=stack[top];
top=top-1;}
return(value);
}


void show_stack(int stack[],int top)
{  if(top<0)
{cout<<"Stack empty";
return;
}
clrscr();
cout<<"The values are";
do
{ cout<<'\n'<<stack[top];
top=top-1;
}while(top>=0);
}




