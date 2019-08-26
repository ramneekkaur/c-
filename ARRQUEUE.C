#include<stdio.h>
#include<conio.h>
#define MAX 100
int q[MAX+1],front=0,rear=0;
void insert();
void del();
void traverse();

void main()
{
int ch;
clrscr();
printf("Enter your choice:\n 1. Insert\n2. Delete \n3. Traverse \n4. Exit\n");
scanf("%d",&ch);
clrscr();
switch(ch)
{
case 1: insert();
	break;
case 2: del();
	break;
case 3: traverse();
	break;
case 4: break;
default:printf("Enter the correct choices");
	break;
}}
void insert()
{

 int m;
 if(rear==MAX)
 {
  printf("Queue is overflow\n");
  return;
 }
 printf("\n Input elements to insert\n");
 scanf("%d",&m);
 rear++;
 q[rear]=m;
 }

void del()
{
if(front==0)
{ printf("Queue is underflow\n");
return;
}
if(front==rear)
{
 q[front]='\0';
 front=rear=0;
 }
else
{ q[front]='\0';
front++;
}
}
void traverse()
{
int i;
printf("\nElements in the queue are:\n");
for(i=front;i<=rear;i++)
printf("%d\n",q[i]);
}

