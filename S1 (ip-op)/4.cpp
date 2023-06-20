#include <iostream>
using namespace std;

int main()
{
  float F, C;
  cout << "Enter the temp in celcius : ";
  cin >> C;
  F = 9 * C / 5 + 32;
  cout << "Farehnite : " << F;
}