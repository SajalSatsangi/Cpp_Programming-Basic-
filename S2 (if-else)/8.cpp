#include <iostream>
using namespace std;

int main()
{
  int side;

  cout << "Enter the side : ";
  cin >> side;

  if (side == 1)
  {
    cout << "It is a line";
  }
  else if (side == 2)
  {
    cout << "It is two lines";
  }
  else if (side == 3)
  {
    cout << "It is triangle";
  }
  else if (side == 4)
  {
    cout << "It is quadilateral";
  }
  else if (side == 5)
  {
    cout << "It is pentagonal";
  }
  else if (side == 6)
  {
    cout << "It is hexagonal";
  }
  else if (side == 7)
  {
    cout << "It is heptagonal";
  }
  else if (side == 8)
  {
    cout << "It is octagonal";
  }
  else if (side > 8)
  {
    cout << "It is polygon";
  }
  else
  {
    cout << "wrong input";
  }
}