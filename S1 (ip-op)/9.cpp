#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  double a, b, c, root1, root2, d;
  cout << "Comapare your quadratic equation from the following equation\n\t\t ax^(2)+bx+c=0\nand enter the value of a, b and c";
  cout << "\n\n\tEnter the value of a : ";
  cin >> a;
  cout << "\tEnter the value of b : ";
  cin >> b;
  cout << "\tEnter the value of c : ";
  cin >> c;

  d = b * b - 4 * a * c;
  root1 = (-b - sqrt(d)) / (2 * a);
  root2 = (-b + sqrt(d)) / (2 * a);

  cout << "\n\n\n\tRoots are :";
  cout << "\n\t\tRoot1 = " << root1;
  cout << "\n\t\tRoot1 = " << root2;
}