#include <iostream>
using namespace std;

int main()
{
  int i, n;

  cout << "Enter the value of n : ";
  cin >> n;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
      cout << i << ", ";
  }
  return 0;
}