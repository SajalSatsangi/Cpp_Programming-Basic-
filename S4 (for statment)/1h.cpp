#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int i, j, sum = 1, n, fact, x;

  cout << "Enter the value of x : ";
  cin >> x;
  cout << "Enter the value of n : ";
  cin >> n;

  for (i = 1; i < n; i++)
  {
    fact = 1;
    for (j = 1; j < i; j++)
    {
      fact = fact * j;
    }
    sum = sum + pow(x, i) / fact;
  }
  cout << "Sum : " << sum;
  return 0;
}