#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float A, S, a, b, c;
  cout << "Enter the value sides :\n";
  cout << "\tSide 1 = ";
  cin >> a;
  cout << "\tSide 2 = ";
  cin >> b;
  cout << "\tSide 3 = ";
  cin >> c;

  S = (a + b + c) / 2;
  A = sqrt(S * (S - a) * (S - b) * (S - c));
  cout << "Area of Triangle : " << A;
}