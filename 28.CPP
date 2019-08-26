#include<iostream>
#include<conio.h>
using namespace std;
class vector
{
	private:
		int *array;
	public:
		void *operator new(size_t size)
		{
			vector *my_vector;
			my_vector =  ::new vector;
			my_vector -> array = new int[10];
			cout<<"Overloaded New operator called \n";
			return my_vector;

		}
		void operator delete(void *vec)
		{
			vector *my_vect;
			my_vect = (vector*)vec;
			delete(int *)my_vect->array;
			cout<<"Overloaded Delete operator called \n";
			::delete vec;
		}
};
int main()
{
	//clrscr();
	vector *my_vector = new vector;
	delete my_vector;
	//getch();
	return 0;
}
