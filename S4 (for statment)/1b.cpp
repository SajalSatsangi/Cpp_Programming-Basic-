#include <iostream>
using namespace std;

int main()
{
  int i = 1, n, sum = 0, j = 1;

  cout << "Enter the value of n : ";
  cin >> n;

  for (j = 1; j <= n; j++)
  {
    sum = sum + i - (i + 2);
    i = i + 4;
  }

  cout << "Sum : " << sum;
  return 0;
}