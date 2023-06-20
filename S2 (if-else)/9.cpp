#include <iostream>
using namespace std;

int main()
{
  int income;

  cout << "Enter the income : ";
  cin >> income;

  if (income < 100000 && income > 0)
  {
    cout << "0% of tax";
  }
  else if (income >= 100000 && income < 200000)
  {
    cout << "5% of tax";
  }
  else if (income >= 200000 && income < 350000)
  {
    cout << "6.5% of tax";
  }
  else if (income >= 350000 && income < 500000)
  {
    cout << "8% of tax";
  }
  else if (income >= 500000)
  {
    cout << "10% of tax";
  }
  else
  {
    cout << "Wrong input";
  }
}