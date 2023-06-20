#include <iostream>
using namespace std;

int main()
{
  int Amount;

  cout << "Enter the Amounts : ";
  cin >> Amount;

  if (Amount < 10000 && Amount > 0)
  {
    cout << "0 discount";
  }
  else if (Amount < 20000 && Amount >= 10000)
  {
    cout << "2% discount";
  }
  else if (Amount < 35000 && Amount >= 20000)
  {
    cout << "5% discount";
  }
  else if (Amount < 50000 && Amount >= 35000)
  {
    cout << "7.5% discount";
  }
  else if (Amount >= 50000)
  {
    cout << "10% discount";
  }
  else
  {
    cout << "wrong input";
  }
}