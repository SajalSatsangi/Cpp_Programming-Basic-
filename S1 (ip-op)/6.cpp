#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float distance, x1, y1, x2, y2;

  cout << "Enter the value of coordinates : ";
  cout << "\n\tX1 = ";
  cin >> x1;
  cout << "\tY1 = ";
  cin >> y1;
  cout << "\tX2 = ";
  cin >> x2;
  cout << "\tY2 = ";
  cin >> y2;

  distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  cout << "distance : " << distance;
}