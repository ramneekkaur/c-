#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
#define MAX 100
int Q[MAX],rear,front;

void add_Q(int Q[],int val,int &rear);
int delete_Q(int Q[],int &front,int rear);
void show_Q(int Q[],int rear,int front);

void main()
{
clrscr();
int val,choice;
char opt='Y';
rear=-1;
front=-1;

do
{
cout<<"\n\t\t Main Menu";
cout<<"\n\t\t1.Addition of queue";
cout<<"\n\t\t2.Deletion of queue";
cout<<"\n\t\t3.Traverse of queue";
cout<<"\n\t\t4.Exit from menu";
cout<<"\nEnter your choice from above";
cin>>choice;
switch(choice)
{
  case 1:do
	 {
	 cout<<"\nEnter the value to be added in the queue";
	 cin>>val;
	 add_Q(Q,val,rear);
	 cout<<"\nDo you want to enter more elements<Y/N>";
	 cin>>opt;
	 }while(toupper(opt)=='Y');
	 break;
  case 2:opt='Y';
	 do
	 {
	 val=delete_Q(Q,front,rear);
	  if(val!=-1)
       {	 cout<<"\nDeleted element is"<<val;
	  }
	 cout<<"\nDo you want to delete more elements<Y/N>";
	 cin>>opt;
	 }while(toupper(opt)=='Y');
	 break;
  case 3:show_Q(Q,rear,front);
	 break;
  case 4:exit(0);
  }}while(choice!=4);
  getch();
  }

void add_Q(int Q[],int val,int &rear)
{
if(rear==MAX-1)
{cout<<"\nQueue is full";}
else
rear=rear+1;
Q[rear]=val;
}

int delete_Q(int Q[],int &front,int rear)
{int value;
if(front==rear)
{cout<<"\nQueue is empty";
value=-1;}
else
{front=front+1;
value=Q[front];   }

return(value);
}

void show_Q(int Q[],int rear,int front)
{
clrscr();if(front==rear)
{cout<<"Queue is empty";
return;
}
cout<<"\nThe values are";
do
{ front=front+1;
cout<<'\n'<<Q[front];

}while(front!=rear);
}