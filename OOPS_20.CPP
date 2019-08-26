#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class publications{

	char title[40];
	float price;
	public:
	publications(){
		strcpy(title, " ");
		price = 0.0;
	}
	void getdata(){
		cout<<"\nEnter the Title name and Price\n";
		gets(title);
		cin>>price;
	}
	void putdata(){
		cout<<"\nTitle: "<<title<<"\nPrice: Rs."<<price;
	}
};

class book: public publications{

	int pages;
	public:
	book(){
		cout<<"\nEntry for Book:";
		pages = 0;
	}
	void getdataBook(){
		getdata();
		cout<<"Enter the page count:\n";
		cin>>pages;
	}

	void putdataBook(){
		putdata();
		cout<<"\nPage Count: "<<pages<<"\n";
	}
};

class tape: public publications{

	float duration;
	public:
	tape(){
		duration = 0.0;
		cout<<"\nEntry for Tape:";
		
	}
	void getdataTape(){
		getdata();
		cout<<"Enter the duration: ";
		cin>>duration;
	}
	void putdataTape(){
		putdata();
		cout<<"\nDuration: "<<duration<<" minutes";
	}
};

int main(){

//	clrscr();
	book b1;
	
	b1.getdataBook();
	b1.putdataBook();
	tape t1;
	
	t1.getdataTape();
	t1.putdataTape();
	
	//getch();
}
