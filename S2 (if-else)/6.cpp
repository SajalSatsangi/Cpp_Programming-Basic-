#include <iostream>
using namespace std;

int main()
{
  int choice;
  double F, C;
  cout << "choice 1 : Farhenheit to Celcius\n";
  cout << "choice 2 : Celcius to Farhenheit\n";
  cout << "\tEnter your choice : ";
  cin >> choice;

  if (choice == 2)
  {
    cout << "Enter the temp in Celcius : ";
    cin >> C;
    F = 9 * C / 5 + 32;
    cout << "Farehnite : " << F;
  }
  else if (choice == 1)
  {
    cout << "Enter the temp in Farehnite : ";
    cin >> F;
    C = (F - 32) / 9 * 5;
    cout << "Celcius : " << C;
  }
  else
  {
    cout << "wrong input";
  }
}