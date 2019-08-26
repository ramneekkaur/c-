#include<iostream>
using namespace std;

class Array
{
  int arr[5];
  public:
  
  class OutOfRange {}; 
  int & operator[](int x)
  {
    if (x < 0 || x >= 5)
      throw OutOfRange();
    return arr[x];
  }   
};

int main()
{
  Array arr1;
  cout << "Array size allowed is 5\n";
  int n = 0;
  try 
  {
    cout << "Enter the size of Array: ";
    cin >> n;
    cout << "Enter the array elements\n";
    for (int i = 0;i < n; i++)
    {   
      cout << "Enter the " << i + 1 <<"th element: ";
      cin >> arr1[i];
    }   
  }
  catch (Array :: OutOfRange)
  {
    cout << "\nOut Of Range error\n";
  }
  return 0;
}
