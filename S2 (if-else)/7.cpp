#include <iostream>
using namespace std;

int main()
{
  int choice;
  double side, length, breadth, radius, Area, Perimeter, pie;
  pie = 22 / 7;
  cout << "choice 1 : square\n";
  cout << "choice 2 : rectangle\n";
  cout << "choice 3 : circle\n";
  cout << "\tEnter your choice : ";
  cin >> choice;

  if (choice == 1)
  {
    cout << "Enter the side : ";
    cin >> side;

    Area = side * side;
    Perimeter = 4 * side;
  }
  else if (choice == 2)
  {
    cout << "Enter the length : ";
    cin >> length;
    cout << "Enter the breadth : ";
    cin >> breadth;

    Area = length * breadth;
    Perimeter = 2 * (length + breadth);
  }
  else if (choice == 3)
  {
    cout << "Enter the radius : ";
    cin >> radius;

    Area = pie * radius * radius;
    Perimeter = 2 * pie * radius;
  }
  else
  {
    cout << "wrong input";
  }

  cout << "Area : " << Area << endl;
  cout << "Perimeter : " << Perimeter;
}