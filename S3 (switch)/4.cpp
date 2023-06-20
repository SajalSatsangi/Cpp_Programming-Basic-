#include <iostream>
using namespace std;

int main()
{
  double marks;
  int grade;
  cout << "Enter your marks : ";
  cin >> marks;

  if (marks > 80)
  {
    grade = 1;
  }
  else if (marks >= 60 && marks < 80)
  {
    grade = 2;
  }
  else if (marks >= 50 && marks < 60)
  {
    grade = 3;
  }
  else if (marks >= 40 && marks < 50)
  {
    grade = 4;
  }

  switch (grade)
  {
  case 1:
    cout << "Distinction";
    break;
  case 2:
    cout << "First Division";
    break;
  case 3:
    cout << "Second Division";
    break;
  case 4:
    cout << "Third Division";
    break;
  default:
    cout << "Fail";
    break;
  }
}