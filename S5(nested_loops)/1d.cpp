#include <iostream>
using namespace std;

int main()
{
  int i, j, k = 1;

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < i; j++)
    {
      cout << k << " ";
      k++;
    }
    cout << endl;
  }

  return 0;
}