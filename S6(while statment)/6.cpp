#include <iostream>
using namespace std;

int main()
{
  int n, i = 1, sum = 0, k;
  cout << "Enter the no of terms :-";
  cin >> n;

  while (i <= n)
  {
    cout << i << " : ";
    cin >> k;
    sum = sum + k;
    i++;
  }

  cout << "avg : " << sum / n;

  return 0;
}