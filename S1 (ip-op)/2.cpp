#include <iostream>
using namespace std;

int main()
{
  // 22 / 7 is not storing
  int Radius = 10;
  double pie = 3.14;
  float Area = pie * Radius * Radius;
  float Perimeter = 2 * pie * Radius;

  cout << "Area : " << Area << endl;
  cout << "Perimeter : " << Perimeter << endl;
}