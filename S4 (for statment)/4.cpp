#include <iostream>
using namespace std;

int main()
{
  int i, num, n;

  cout << "Enter the no. of terms : ";
  cin >> n;

  for (i = 1; i < 11; i++)
  {
    cout << n << " X " << i << " = " << n * i << endl;
  }

  return 0;
}