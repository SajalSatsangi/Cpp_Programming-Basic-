#include <iostream>
using namespace std;

int main()
{
  int n, zero = 0, odd = 0, even = 0;
  while (n != (-1))
  {
    cout << "Enter the no : ";
    cin >> n;

    if (n == 0)
      zero++;
    else if (n % 2 == 0)
      even++;
    else
      odd++;
  }

  cout << "zero : " << zero << endl;
  cout << "even : " << even << endl;
  cout << "odd : " << odd;
  return 0;
}