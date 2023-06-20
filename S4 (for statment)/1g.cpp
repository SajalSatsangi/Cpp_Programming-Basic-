#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int i, j, n, m = -1, x, sum = 0, k = 0, mm;

  cout << "Enter the value of x : ";
  cin >> x;
  cout << "Enter the value of n : ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    int fact = 1;
    for (j = 2; j < k; j++)
    {
      fact = fact * j;
    }
    mm = mm * m;
    int count = pow(x, k) * mm;
    sum = sum + count / fact;
    k = k + 2;
  }

  cout << "Sum : " << sum;

  return 0;
}