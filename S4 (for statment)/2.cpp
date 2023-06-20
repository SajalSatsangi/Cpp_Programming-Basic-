#include <iostream>
using namespace std;

int main()
{
  int i, num, n, max, min;

  cout << "Enter the no. of terms : ";
  cin >> n;
  cout << "Enter the no. : \n";
  cout << "\t1 : ";
  cin >> num;

  max = min = num;

  for (i = 2; i <= n; i++)
  {
    cout << "\t" << i << " : ";
    cin >> num;
    if (max < num)
      max = num;
    else if (min > num)
      min = num;
  }

  cout << "MAX : " << max << "\nMIN : " << min;
  return 0;
}