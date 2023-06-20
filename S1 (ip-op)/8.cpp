#include <iostream>
using namespace std;

int main()
{
  float u, t, s, a;
  cout << "Enter the value of u : ";
  cin >> u;
  cout << "Enter the value of a : ";
  cin >> a;
  cout << "Enter the value of t : ";
  cin >> t;

  s = u * t + 1 / 2 * a * t * t;

  cout << "Value of s : " << s;
}