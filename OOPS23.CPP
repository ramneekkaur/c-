#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class List{
public:
int data[50];
int index;
    List()
    {
	index=0;
    }
    virtual void store()=0;
    virtual void retrieve()=0;

};

class Stack : public List{
public:
void store(){
    int num;
    cout<<"\nenter value to be pushed :";
    cin>>num;
    data[index]=num;
    index++;
}
void retrieve();
};

void Stack::retrieve(){
    cout<<"Stack values are:\n";
    for(int i=index-1;i>=0;i--)
    {
	cout<<data[i]<<"  ";
    }
}


class Queue : public List{
public:
void store(){
    int num;
    cout<<"\nenter value to be enqueued :";
    cin>>num;
    data[index]=num;
    index++;
}

void retrieve();
};

void Queue::retrieve(){
    cout<<"Queue values are:\n";
    for(int i=0;i<index;i++)
    {
	cout<<data[i]<<"  ";
    }
}

int main()
{
    int choice;
    Stack s;
    Queue q;
    //clrscr();
    cout<<"Menu for handling stack and queue\n";
    cout<<"1.Push stack\n2.Display Stack\n3.Enqueue\n4.Display queue\n5.Exit\n";
    while(1)
    {
	cout<<"\nEnter your choice :";
	cin>>choice;
	switch(choice)
	{
	    case 1:s.store();
		    break;
	    case 2:s.retrieve();
		    break;
	    case 3:q.store();
		    break;
	    case 4:q.retrieve();
		    break;
	    case 5:exit(0);

	}
    }
    return 0;
}
