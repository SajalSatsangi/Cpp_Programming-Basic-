#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int i, j, n, sum = 0, x, fact;
  cout << "Enter the value of x : ";
  cin >> x;
  cout << "Enter the value of n : ";
  cin >> n;
  for (i = 1; i <= n; i = i = i + 4)
  {
    fact = 1;
    for (j = 2; j <= i; j++)
    {
      fact = fact * j;
    }
    sum = sum + pow(x, i) / fact - pow(x, i + 2) / fact;
  }

  cout << "Sum : " << sum;
  return 0;
}