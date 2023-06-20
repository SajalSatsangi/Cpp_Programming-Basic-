#include <iostream>
using namespace std;

int main()
{
  int Experience, Salary;

  cout << "Enter the Experience Years : ";
  cin >> Experience;

  cout << "Enter the Salary : ";
  cin >> Salary;

  if (Experience > 10 && Experience <= 15)
  {
    if (Salary >= 0 && Salary < 500000)
    {
      cout << "15 % increment";
    }
    else if (Salary >= 500000 && Salary < 750000)
    {
      cout << "12 % increment";
    }
    else if (Salary >= 750000)
    {
      cout << "12 % increment";
    }
    else
    {
      cout << "wrong input salary";
    }
  }
  else if (Experience > 15 && Experience <= 20)
  {
    if (Salary >= 0 && Salary < 500000)
    {
      cout << "18 % increment";
    }
    else if (Salary >= 500000 && Salary < 750000)
    {
      cout << "16 % increment";
    }
    else if (Salary >= 750000)
    {
      cout << "13 % increment";
    }
    else
    {
      cout << "wrong input salary";
    }
  }
  else if (Experience > 20)
  {
    if (Salary >= 0 && Salary < 500000)
    {
      cout << "20 % increment";
    }
    else if (Salary >= 500000 && Salary < 750000)
    {
      cout << "17 % increment";
    }
    else if (Salary >= 750000)
    {
      cout << "15 % increment";
    }
    else
    {
      cout << "wrong input salary";
    }
  }
  else
  {
    cout << "wrong input years";
  }
}