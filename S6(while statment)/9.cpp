#include <iostream>
using namespace std;

int main()
{
  int i = 1, n = 10, l1 = 1, l2 = 1, series;
  cout << "1, 1";
  while (i <= n - 2)
  {
    series = l1 + l2;
    l1 = l2;
    l2 = series;
    cout << ", " << series;
    i++;
  }

  return 0;
}