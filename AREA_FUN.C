#include<stdio.h>
#include<conio.h>
float area(float);
void main()
{
float r;
clrscr();
printf("Enter the radius of a circle");
scanf("%f",&r);
printf("Area of the circle is %f",area(r));
getch();
}
float area(float X)
{float a;
a=3.14*X*X;
return a;
}