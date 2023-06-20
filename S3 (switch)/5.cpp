#include <iostream>
using namespace std;

int main()
{
  int day, month, year;
  cout << "Enter the date : \n";
  cout << "\tDay :";
  cin >> day;
  cout << "\tMonth :";
  cin >> month;
  cout << "\tYear :";
  cin >> year;

  switch (month)
  {
  case 1:
    cout << day << " January " << year;
    break;
  case 2:
    cout << day << " February " << year;
    break;
  case 3:
    cout << day << " March " << year;
    break;
  case 4:
    cout << day << " April " << year;
    break;
  case 5:
    cout << day << " May " << year;
    break;
  case 6:
    cout << day << " June " << year;
    break;
  case 7:
    cout << day << " July " << year;
    break;
  case 8:
    cout << day << " August " << year;
    break;
  case 9:
    cout << day << " September " << year;
    break;
  case 10:
    cout << day << " October " << year;
    break;
  case 11:
    cout << day << " November " << year;
    break;
  case 12:
    cout << day << " December " << year;
    break;
  default:
    cout << "Wrong input";
    break;
  }
}