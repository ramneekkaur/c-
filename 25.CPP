#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class date
{
	int day;
	int month;
	int year;

	public:
		date(int a, int b, int c)
		{
			day = a;
			month = b;
			year = c;
		}
		void operator ++()
		{
			if(day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10))
			{
				day = 1;
				month = month+1;
			}
			else if(day = 30 && (month == 4 || month == 6 || month == 9 || month ==11))
			{
				day = 1;
				month = month +1;
			}
			else if(day =28 && month == 2)
			{
				day =1;
				month = month+1;
			}
			else if(day =31 && month == 12)
			{
				day = 1;
				month = 1;
				year = year +1;
			}
			else
			{
				day = day +1;
			}
		}
		void display()
		{
			cout<<"Date : "<<day<<"//"<<month<<"//"<<year<<endl;
		}
};
int main()
{
	//clrscr();
	date d(31,12,2012);
	d++;
	d.display();
	//getch();
	return 0;
}
