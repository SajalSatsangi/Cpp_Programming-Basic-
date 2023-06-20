#include <iostream>
using namespace std;

int main()
{
  int n = 3, sum = 1;

  while (n < 100)
  {
    if (n % 2 != 0)
      sum = sum + n;
    n++;
  }
  cout << "sum : "<<sum;

  return 0;
}