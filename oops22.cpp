#include<iostream>
using namespace std;
class Shape
{
 protected :
 double x0, y0;
 public :
 void getdata(double x, double y=0)
 {
 x0 = x;
 y0 = y;
 }
 virtual void displayArea() = 0;
};
class Triangle : public Shape
{
 public :
 void getdata(double x, double y)
 {
 Shape :: getdata(x,y);
 }
 void displayArea()
 {
 double area = (x0 * y0)/2.0;
 cout << "\n Area of triangle = " << area<<endl;
 }
};
class Rectangle : public Shape
{
 public :
 void getdata(double x, double y)
 {
 Shape :: getdata(x,y);
 }
 void displayArea()
 {
 double area = (x0 * y0);
 cout << "\n Area of rectangle = " << area<<endl;
 }
};
class Circle : public Shape
{
 public :
 void getdata(double x)
 {
 Shape :: getdata(x);
 }
 void displayArea()
 {
 double area = 3.14 *(x0 * x0);
 cout << "\n Area of circle = " << area<<endl;
 }
};

int main()
{
 Triangle t;
 Rectangle r;
 Circle c;
 int t1,t2,r1,r2,rad;

 cout<<"enter base and height of triangle: ";
 cin>>t1>>t2;
 t.getdata(t1,t2);
 t.displayArea();

 cout<<"\nenter length and width of rectangle: ";
 cin>>r1>>r2;
 r.getdata(r1,r2);
 r.displayArea();

 cout<<"\nenter radius of circle: ";
 cin>>rad;
 c.getdata(rad);
 c.displayArea();
 return 0;
}
