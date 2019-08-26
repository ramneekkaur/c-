#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int real;
	int imag;
	public:
		complex(){
		}
		complex(int r,int i)
		{
			real = r;
			imag = i;
		}
		void display()
		{
			cout<<"Complex Number: "<<real<<" + "<<imag<<"i\n";
		}
		void operator +=(complex c2)
		{
			complex temp;
			real = real + c2.real;
			imag = imag + c2.imag;
		       //	return temp;
		}
};
int main()
{
//	clrscr();
	complex a(5,5);
	complex b(10,10);
	a+=b;
	a.display();
//	getch();
return 0;
}
