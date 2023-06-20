#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter the three numbers :\n";
  cout << "\ta : ";
  cin >> a;
  cout << "\tb : ";
  cin >> b;
  cout << "\tc : ";
  cin >> c;

  if (a > b)
  {
    if (a > c)
    {
      cout << a << " is largest";
    }
    else
    {
      cout << c << " is largest";
    }
  }
  else
  {
    if (b > c)
    {
      cout << b << " is largest";
    }
    else
    {
      cout << c << " is largest";
    }
  }
}