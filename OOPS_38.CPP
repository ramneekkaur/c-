#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>

template <class T>
class compare{

	T *x, *y;
	public:
	compare(T &a, T &b){
		x = new T;
		*x = a;
		y = new T;
		*y = b;
		if(*x>b) cout<<*x;
		else cout<<*y;
	}
	~compare(){
		cout<<"\n\n"<<*x<<" and "<<*y<<" DELETED";
		delete x;
		delete y;
	}
};
void main(){
	clrscr();
	int p,q;
	float r,s;
	double l,m;
	cout<<"Enter 2 INTEGER numbers: \n";
	cin>>p>>q;
	cout<<"Enter 2 FLOAT numbers: \n";
	cin>>r>>s;
	cout<<"Enter 2 DOUBLE numbers: \n";
	cin>>l>>m;
	cout<<"\nINTEGER comparison: ";
	compare <int> I(p,q);
	cout<<" is greater";
	cout<<"\nFLOAT comparison: ";
	compare <float> F(r,s);
	cout<<" is greater";
	cout<<"\nDOUBLE comparison: ";
	compare <double> D(l,m);
	cout<<" is greater";
	getch();

}
