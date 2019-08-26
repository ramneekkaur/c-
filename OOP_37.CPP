#include<iostream.h>
#include<conio.h>

template <class T>
T squared(T & x){
	T t;
	t = x*x;
	return t;
}

void main(){

	clrscr();
	int a;
	float b;
	double c;
	cout<<"Enter the INTEGER number : ";
	cin>>a;
	cout<<"Enter the FLOAT number : ";
	cin>>b;
	cout<<"Enter the DOUBLE number : ";
	cin>>c;
	cout<<"\nINTEGER answer = "<<squared(a);
	cout<<"\nFLOAT answer = "<<squared(b);
	cout<<"\nDOUBLE answer = "<<squared(c);
	getch();
}
