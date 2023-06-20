#include <iostream>
using namespace std;

int main()
{
  int i, n, j, sum = 0, fact;

  cout << "Enter the value of n";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    fact = 1;
    for (j = 2; j <= i; j++)
    {
      fact = fact * j;
    }
    sum = sum + fact;
  }

  cout << "Sum" << sum;

  return 0;
}