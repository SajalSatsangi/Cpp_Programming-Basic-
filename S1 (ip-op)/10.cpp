#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  double dia, rad, x1 = 2, y1 = 2, x2 = 5, y2 = 6, area, pie;

  pie = 22 / 7;
  dia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  rad = dia / 2;

  area = pie * rad * rad;
  cout << "Area of circle : " << area;
}