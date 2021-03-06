#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX 100

int queue[MAX];
int front,rear;

void add_Q(int queue[],int front,int val,int &rear);
int del_Q(int queue[],int &front,int rear);
void show_Q(int queue[],int front,int rear);

void main()
{ int choice,val;
char opt='Y';

rear=-1;
front=-1;
clrscr();
do
{
cout<<"\n\t\tMain Menu";
cout<<"\n\t 1.Insertiom in Queue";
cout<<"\n\t 2.DEletion in Queue";
cout<<"\n\t 3.Traverse of Queue";
cout<<"\n\t 4.Exit from Menu";
cout<<"\n\n Enter your choice from above";
cin>>choice;

switch(choice)
{
case 1:
  do
  {cout<<"Enter the value to be inserted in the queue";
  cin>>val;
  add_Q(queue,front,val,rear);
  cout<<"Do you want to insert more elements<Y/n>?";
  cin>>opt;
  }
  while(toupper(opt)=='Y');
  break;
case 2:
    opt='Y';
  do
  { val=del_Q(queue,front,rear);
  if(val!=-1)
  cout<<"Value deleted from queue is"<<val;
  cout<<"\nDo you want to delete more elements<Y/N>?";
  cin>>opt;
  } while(toupper(opt=='Y'));
  break;
case 3:
  show_Q(queue,front,rear);
  break;
case 4:
  exit(0);
  } }
  while(choice!='Y');
  }

void add_Q(int queue[],int front,int val,int &rear)
{
 if((rear+1)%MAX==front)
 { cout<<"Queue Full";
 }
else
{
 rear=(rear+1)%MAX;
 queue[rear]=val;
 }
}

int del_Q(int queue[],int &front,int rear)
{
 int value;
 if(front==rear)
 {  cout<<"Queue Empty";
 value=-1;
 }else
 {
  front=(front+1)%MAX;
 value=queue[front];
 } return(value);
}

void show_Q(int queue[],int front,int rear)
{
 clrscr();
 cout<<"The values are";
 do
{ front=(front+1)%MAX;
 cout<<"\n"<<queue[front];
 }while(front!=rear);
 }
