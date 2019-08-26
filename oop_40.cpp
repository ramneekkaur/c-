#include<iostream>
using namespace std;

class Number
{
  float n;
  public:
  void input()
  {
    cin >> n;
  }

  class DivideByZero {}; 
  float division(Number num)
  {
    if (num.n == 0)
      throw DivideByZero();
    else
      return n/num.n;
  }
};

int main()
{
  Number n1, n2; 
  float ans;
  cout << "Enter first number: ";
  n1.input();
  cout << "Enter second number: ";
  n2.input();

  try 
  {
    ans = n1.division(n2);
    cout << "Division Succesful\n";
  }
  catch(Number :: DivideByZero)
  {
    cout << "Division Failed: Divide by zero error encountered\n";
    return 0;
  }
  cout << "Answer is: " << ans;
  cout << "\n";
  return 0;
}
