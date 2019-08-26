#include<iostream.h>
#include<conio.h>
#include<math.h>
class coordinates
{
protected:
		int x,y;
public:
	   void read()
	   {
	   cout<<"enter x and y coordinates";
	   cin>>x>>y;
	   }

};

class distance :public coordinates
{
private:
	float dist;
public:
	void calculate()
	{
	dist = sqrt(( pow(x,2)+pow(y,2)));
	}
	void display()
	   {
	   calculate();
	   cout<<"\nx coordinate:"<<x;
	   cout<<"\ny coordinate:"<<y;
	   cout<<"\nDistance:"<<dist;
	   }

};

void main()
{
clrscr();
distance d;
d.read();
d.display();
getch();
}
