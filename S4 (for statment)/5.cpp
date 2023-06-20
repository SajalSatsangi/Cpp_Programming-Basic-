#include <iostream>
using namespace std;

int main()
{
  int i, n, sum = 1, x = 1, y;

  cout << "Enter the no. of terms : ";
  cin >> n;

  cout << "Fibonacci Series : 1";
  for (i = 1; i < n; i++)
  {
    cout << ", " << sum;
    y = x;
    x = sum;
    sum = y + x;
  }

  return 0;
}