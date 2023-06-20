#include <iostream>
using namespace std;

int main()
{
  int i, n, r, FactN = 1, FactR = 1, Fact = 1;

  cout << "Enter the value of n : ";
  cin >> n;
  cout << "Enter the value of r : ";
  cin >> r;

  for (i = 1; i <= n; i++)
  {
    FactN = FactN * i;
  }
  for (i = 1; i <= r; i++)
  {
    FactR = FactR * i;
  }
  for (i = 1; i <= (n - r); i++)
  {
    Fact = Fact * i;
  }

  int ans = FactN / (FactR * Fact);
  cout << "Ans : " << ans;

  return 0;
}