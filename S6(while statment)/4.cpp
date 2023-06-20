#include <iostream>
using namespace std;

int main()
{
  int n, i = 0, sum = 0;
  cout << "Enter the no :-";
  cin >> n;

  while (i <= n)
  {
    sum = sum + i;
    i++;
  }
  cout << "sum : " << sum;

  return 0;
}