#include <iostream>
using namespace std;

int main()
{
  char ch;
  int i;
  cout << "Character\t\tASCII Value\n";

  for (i = 0; i < 255; i++)
  {
    ch = i;
    cout << ch << "\t\t\t" << i << endl;
  }
  return 0;
}