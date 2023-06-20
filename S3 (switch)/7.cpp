#include <iostream>
using namespace std;

int main()
{
  int k, a, x, b, y;

  cout << "Enter the value of k : ";
  cin >> k;

  // == are not using in if-else statment expression
  // if (k == 1)
  // {
  cout << "a : ";
  cin >> a;
  // if (k != 4)
  // {
  cout << "b : ";
  cin >> b;
  //}
  cout << "x : ";
  cin >> x;
  //}

  switch (k)
  {
  case 1:
    y = a * x + b;
    cout << "Y : " << y;
    break;

  case 2:
    y = a * x * x + b * b;
    cout << "Y : " << y;
    break;

  case 3:
    y = a * x;
    cout << "Y : " << y;
    break;

  case 4:
    y = a + x;
    cout << "Y : " << y;
    break;

  default:
    cout << "Wrong Input";
    break;
  }

  return 0;
}