#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
using namespace std;

void area(int a) {

    cout << "Area of Square:" << a*a;
}

void area(int a, int b) {

    cout << "Area of rectangle:" << a*b;
}

void area(int a, int b, int c) {

int Perimeter = a+b+c;
    float s = (a+b+c)/2;
    cout << "Area of triangle:" <<sqrt(s*(s-a)*(s-b)*(s-c));
}

void area(float a) {

    cout << "Area of Circle:" << pi * a*a;
}

int main() {
    int ch;
    int a, b, c;
    float r;
    while(1){
   // clrscr();
    cout << "\n\t\tFunction Overloading";
    cout << "\n1.Area of Square\n2.Area of Rectangle\n3.Area of Triangle\n4.Area of Circle\n5.Exit";
	    cout << "\nEnter your Choice? : ";
	    cin>>ch;
    switch (ch) {
	case 1:
	    cout << "Enter side of the Square:";
	    cin>>a;
	    area(a);
	    break;
	case 2:
	    cout << "Enter Length and breadth of the Rectangle:";
	    cin >> a>>b;
	    area(a, b);
	    break;
	case 3:
	    cout << "Enter three Sides of the Triangle:";
	    cin >> a>>b>>c;
	    area(a, b, c);
	    break;
	case 4:
	    cout << "Enter Radius of the Circle:";
	    cin>>r;
	    area(r);
	    break;
	case 5:
	    exit(0);
    }
    //getch();
    }
    return 0;
}
