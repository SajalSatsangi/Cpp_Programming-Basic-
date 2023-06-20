#include <iostream>
using namespace std;

int main()
{
  double d, a, b, c;

  cout << "Comapare your quadratic equation from the following equation\n\t\t ax^(2)+bx+c=0\nand enter the value of a, b and c";
  cout << "\n\n\tEnter the value of a : ";
  cin >> a;
  cout << "\tEnter the value of b : ";
  cin >> b;
  cout << "\tEnter the value of c : ";
  cin >> c;

  d = b * b - 4 * a * c;
  if (d > 0)
  {
    cout << "Roots are real";
  }
  else if (d == 0)
  {
    cout << "Roots are equal";
  }
  else
  {
    cout << "Roots are imaginary";
  }
}