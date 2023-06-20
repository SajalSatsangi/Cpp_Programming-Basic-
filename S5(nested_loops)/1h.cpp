#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      char k = i + 65 ;
      cout << k;
    }
    cout << endl;
  }

  return 0;
}