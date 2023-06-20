#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int Radius;
  float pie = 3.14, x1 = 0, x2 = 4, y1 = 0, y2 =5;
  // x1 and y1 coordinate for center and x2 and y2 coordinate for point on circumfrence
  
  Radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  float Area = pie * Radius * Radius;
  float Perimeter = 2 * pie * Radius;

  cout << "Area : " << Area << endl;
  cout << "Perimeter : " << Perimeter << endl;
}