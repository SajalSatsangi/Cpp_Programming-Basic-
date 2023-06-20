#include <iostream>
using namespace std;

int main()
{
  int year, leap_year;

  cout << "Enter the year : ";
  cin >> year;

  leap_year = year % 4;

  if (leap_year == 0)
  {
    cout << "Year is leap year";
  }
  else
  {
    cout << "Year is not a leap year";
  }
}