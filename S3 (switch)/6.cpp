#include <iostream>
using namespace std;

int main()
{
  int operation, a, b;
  double c;
  cout << "1. Sum\n2. Sub\n3. Mul\n4. Div";
  cout << "\n\nEnter your Choice : ";
  cin >> operation;

  switch (operation)
  {
  case 1:
    cout << "\tEnter the value of a : ";
    cin >> a;
    cout << "\tEnter the value of b : ";
    cin >> b;
    c = a + b;
    cout << "Sum : " << c;
    break;
  case 2:
    cout << "\tEnter the value of a : ";
    cin >> a;
    cout << "\tEnter the value of b : ";
    cin >> b;
    c = a - b;
    cout << "Sub : " << c;
    break;
  case 3:
    cout << "\tEnter the value of a : ";
    cin >> a;
    cout << "\tEnter the value of b : ";
    cin >> b;
    c = a * b;
    cout << "Mul : " << c;
    break;
  case 4:
    cout << "\tEnter the value of a : ";
    cin >> a;
    cout << "\tEnter the value of b : ";
    cin >> b;
    c = a / b;
    cout << "Div : " << c;
    break;
  default:
    cout << "Wrong Input";
    break;
  }
}