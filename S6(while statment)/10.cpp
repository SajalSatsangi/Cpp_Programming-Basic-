#include <iostream>
using namespace std;

int main()
{
  int n = 3, i = 0, m1, m2, m3, m4, m5, roll;
  string name;
  while (i < n)
  {
    cout << "Enter the roll no : ";
    cin >> roll;
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the marks : " << endl;
    cout << "\t1 = ";
    cin >> m1;
    cout << "\t2 = ";
    cin >> m2;
    cout << "\t3 = ";
    cin >> m3;
    cout << "\t4 = ";
    cin >> m4;
    cout << "\t5 = ";
    cin >> m5;
    cout << "\n\nRoll No : " << roll << endl;
    cout << "Name : " << name << endl;
    cout << "Marks :" << endl;
    cout << "\t1. " << m1 << endl;
    cout << "\t2. " << m2 << endl;
    cout << "\t3. " << m3 << endl;
    cout << "\t4. " << m4 << endl;
    cout << "\t5. " << m5 << endl;
    cout << "\n";
    i++;
  }

  return 0;
}