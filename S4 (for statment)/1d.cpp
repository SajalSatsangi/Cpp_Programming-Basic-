#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x, i, n, j;
  double sum = 1;

  cout << "Enter the value of n : ";
  cin >> n;
  cout << "Enter the value of x : ";
  cin >> x;

  if (n == 1)
    cout << "Sum : 1";

  for (i = 1; i < n - 1; i++)
  {
    sum = sum + pow(x, i) / i;
  }

  cout << "Sum : " << sum;

  return 0;
}