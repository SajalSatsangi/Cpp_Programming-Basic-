#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter the charachter : ";
  cin >> ch;

  switch (ch)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    cout << "You have entered vowel";
    break;

  default:
    cout << "You have entered consonant";
    break;
  }
}