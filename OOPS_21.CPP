#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class date {
	int dd,mm,yyyy;
	public:
	void input() {
		cout<<"enter day:";
		cin>>dd;
		cout<<"enter month:";
		cin>>mm;
		cout<<"enter year:";
		cin>>yyyy;
	}
	void display() {
		cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	}
};

class patient {
	char name[20];
	char disease[20];
	public:
	void input() {
		cout<<"enter name of patient:";
		gets(name);
		cout<<("enter disease of patient:");
		gets(disease);
	}
	void display() {
		cout<<"Name of patient:";
		puts(name);
		cout<<"Disease:";
		puts(disease);
	}
};

class age: public patient, date{

	int age1;
	public:
	age(){
		age1 = 0;
	}
	void input(){
		patient::input();
		cout<<"Enter age: ";
		cin>>age1;
	}
	void display(){
		cout<<"Age: "<<age1<<endl;
		patient::display();
	}
	void isPediatric(date d1, date d2){
		static int ctr = 0;
		if(age1<12){
			cout<<"Patient: "<<ctr+1<<endl;
			cout<<"date of admit:";
			d1.date::display();
			cout<<"date of discharge:";
			d2.date::display();
			display();
		}
		ctr++;
	}

};

int main() {
	//clrscr();
	date d1[20],d2[20];
	age a[20];
	int i,n;
	cout<<"enter number of patients:";
	cin>>n;
	for(i=0;i<n;i++) {
		cout<<"Patient:"<<i+1<<endl;
		cout<<"enter date of admit:"<<endl;
		d1[i].input();
		cout<<"enter date of discharge:"<<endl;
		d2[i].input();
		a[i].input();
	}
	//getch();
	//clrscr();
	cout<<"\n THE LIST OF PEDIATRIC PATIENTS IS:"<<endl;
	for(i=0; i<n; i++){
		a[i].isPediatric(d1[i], d2[i]);
	}
	//getch();
	return 0;
}
