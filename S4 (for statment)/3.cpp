#include <iostream>
using namespace std;

int main()
{
  int i, num, n;

  cout << "Enter the no. of terms : ";
  cin >> n;
  cout << "Enter the no. : \n";
  cout << "\t1 : ";
  cin >> num;

  int sum = num;

  for (i = 2; i <= n; i++)
  {
    cout << "\t" << i << " : ";
    cin >> num;
    sum = sum + num;
  }
  
  cout << "Sum : " << sum;
  cout << "\nAvg : " << sum / n;

  return 0;
}