#include <iostream>
using namespace std;

int main()
{
  int units;

  cout << "Enter the units : ";
  cin >> units;

  if (units <= 100 && units > 0)
  {
    cout << "2/- per unit";
  }
  else if (units <= 300 && units > 100)
  {
    cout << "3.50/- per unit";
  }
  else if (units <= 500 && units > 300)
  {
    cout << "5/- per unit";
  }
  else if (units <= 800 && units > 500)
  {
    cout << "7/- per unit";
  }
  else if (units > 800)
  {
    cout << "8/- per unit";
  }
  else
  {
    cout << "wrong input";
  }
}