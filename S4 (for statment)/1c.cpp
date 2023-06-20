#include <iostream>
using namespace std;

int main()
{
  int i = 1, n, j = 1;
  double sum = 0;

  cout << "Enter the value of n : ";
  cin >> n;

  for (j = 1; j <= n; j++)
  {
    // sum is not storing floating number
    double r = (double)(i / (i + 2));
    sum = sum + r;
    i = i + 4;
  }

  cout << "Sum : " << sum;
  return 0;
}