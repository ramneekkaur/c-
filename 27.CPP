#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class string
{
	char s[30];

	public:
		string(){}
		string(char *t)
		{
			strcpy(s,t);
		}
		string operator +(string s1)
		{
			string temp;
			strcpy(temp.s,strcat(s,s1.s));
			return temp;
		}
		void operator =(string s2)
		{
			strcpy(s,s2.s);
		}
		void operator <=(string s3)
		{
			if(strlen(s)<=strlen(s3.s))
			{
				cout<<"True";
			}
			else
			{
				cout<<"False";
			}
		}
		void length()
		{
			int i;
			for( i=0; s[i] != '\0';i++);
			cout<<i;
		}
		void upper()
		{
			for(int i=0 ; s[i] !='\0';i++)
			{
				if(s[i]>=97 && s[i]<=122)
				{
					s[i] -=32;
				}
			}
		}
		void lower()
		{
			for(int i=0 ; s[i] !='\0';i++)
			{
				if(s[i]>=65 && s[i]<=91)
				{
					s[i] +=32;
				}
			}
		}
		void display()
		{
			cout<<s<<endl;
		}
};
int main()
{
	//clrscr();
	string a("Vyom"),b("Chandra"),c,d;
	d = a+ b;
	c=d;
	cout<<"Length of string \n";
	a.length();
	cout<<"\n Concatinated String \n";
	d.display();
	cout<<"Copied string \n";
	c.display();
	cout<<"Upper case string \n";
	b.upper();
	b.display();
	//getch();
	return 0;
}
