#include<iostream.h>
#include<conio.h>

class student {

	protected:
		char name[20];
		int rno;

	public:
		student(){
			cout<<"Enter Name and Roll No";
			cin>>name>>rno;
		}
};
class exam{
	protected:
		int sub[5];
		int sum;
	public:
		exam(){
			sum = 0;
			cout<<"Enter marks for the 5 subjects";
			for(int i= 0; i<5; i++)
				cin>>sub[i];
		}
		void showGrades(){

			cout<<"\nMarks: \n";
			for(int  k = 0; k< 5; k++){
				cout<<"Subject "<<k+1<<": "<<"Marks = "<<sub[k]<<"\n";
				sum += sub[k];
			}
		}
};
class result: public student, exam{

	public:
		result(){

			cout<<"\nReport Card:\n";
		}
		void showResults(){

			cout<<"\nName: "<<name;
			showGrades();
			cout<<"Total Marks = "<<sum;
		}
};
void main(){

	clrscr();
	result R1;
	R1.showResults();
	getch();
}
