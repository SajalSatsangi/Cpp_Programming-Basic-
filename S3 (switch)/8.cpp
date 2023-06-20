#include <iostream>
using namespace std;

int main()
{
  int shape, choice, Area, Perimeter, side, length, breadth, radius;
  double pie = 22 / 7;

  cout << "1. Square\n2. Rectangle\n3. Circle\n\n";

  cout << "\tEnter the shape : ";
  cin >> shape;

  switch (shape)
  {
  case 1:
    cout << "\n\tSquare\n";

    cout << "1. AREA\n2. PERIMETER\n\n";
    cout << "Choice : ";
    cin >> choice;

    cout << "Enter the side : ";
    cin >> side;

    Area = side * side;
    Perimeter = 4 * side;
    break;

  case 2:
    cout << "\n\tRectangle\n";

    cout << "1. AREA\n2. PERIMETER\n\n";
    cout << "Choice : ";
    cin >> choice;

    cout << "Enter the length : ";
    cin >> length;
    cout << "Enter the breadth : ";
    cin >> breadth;

    Area = length * breadth;
    Perimeter = 2 * (length + breadth);
    break;

  case 3:
    cout << "\n\tCircle\n";

    cout << "1. AREA\n2. PERIMETER\n\n";
    cout << "Choice : ";
    cin >> choice;

    cout << "Enter the radius : ";
    cin >> radius;

    Area = pie * radius * radius;
    Perimeter = 2 * pie * radius;
    break;

  default:
    cout << "\n\tWrong Input";
    break;
  }

  if (choice == 1)
    cout << "Area : " << Area << endl;
  else if (choice == 2)
    cout << "Perimeter : " << Perimeter;

  return 0;
}