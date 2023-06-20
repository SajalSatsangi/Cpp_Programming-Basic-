#include <iostream>
using namespace std;

int main()
{
  int n, r, rev = 0;
  cout << "Enter the no :-";
  cin >> n;
  int k = n;
  while (n != 0)
  {
    r = n % 10;
    n = n / 10;
    rev = rev * 10 + r;
  }

  if (k == rev)
    cout << "It is a palindrome no";
  else
    cout << "It is not a palindrome no";

  return 0;
}