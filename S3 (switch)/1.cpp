#include <iostream>
using namespace std;

int main()
{
  int flag;

  cout << "1--HOT\n2--LUKE WARM\n3--COLD\n\n";
  cout << "Enter your flag : ";
  cin >> flag;

  switch (flag)
  {
  case 1:
    cout << "HOT";
    break;

  case 2:
    cout << "LUKE WARM";
    break;

  case 3:
    cout << "COLD";
    break;

  default:
    cout << "OUT OF RANGE";
    break;
  }
}