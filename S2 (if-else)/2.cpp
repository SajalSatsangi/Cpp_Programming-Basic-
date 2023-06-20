#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "Enter the number : ";
  cin >> num;

  if (num < 0)
  {
    cout << "Number is negative";
  }
  else if (num == 0)
  {
    cout << "Number is zero";
  }
  else
  {
    cout << "Number is positive";
  }
}