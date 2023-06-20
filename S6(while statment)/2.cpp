#include <iostream>
using namespace std;

int main()
{
  int n, r, sum = 0;
  cout << "Enter the no :-";
  cin >> n;
  int k = n;

  while (n != 0)
  {
    r = n % 10;
    n = n / 10;
    sum = sum + r * r * r;
  }
  if (sum == k)
    cout << "It is Armstrong no";
  else
    cout << "It is not Armstrong no";

  return 0;
}