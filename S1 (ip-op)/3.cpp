#include <iostream>
using namespace std;

int main()
{
  float x;
  int a = 250, b = 85, c = 25;
  x = a / (b - c);
  cout << "X : " << x<<endl;

  a = 300, b = 70, c = 70;
  x = a / (b - c);
  cout << "X : " << x;
  // value of x is not printing in 2nd case cause of not defined value of x
}