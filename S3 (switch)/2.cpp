#include <iostream>
using namespace std;

int main()
{
  int angle, quadrant, RoundOff;

  cout << "Enter the angle : ";
  cin >> angle;

  RoundOff = angle % 360;
  cout << "Your Captcha : " << RoundOff;
  cout << "\n\nif 0<Captcha<=90 or -360<=b<-270  so enter Value = 1\n";
  cout << "if 90<Captcha<=180 or -270<=b-180  so enter Value = 2\n";
  cout << "if 180<Captcha<=270 or -180<=b<-90  so enter Value = 3\n";
  cout << "if 270<Captcha<=360 or -90<=b<0  so enter Value = 4\n";
  cout << "if Captcha=0 enter Value = 5\n";
  cout << "\nEnter your Value : ";
  cin >> quadrant;

  switch (quadrant)
  {
  case 1:
    cout << "First quadrant";
    break;

  case 2:
    cout << "Second quadrant";
    break;

  case 3:
    cout << "Third quadrant";
    break;

  case 4:
    cout << "Fourth quadrant";
    break;

  case 5:
    cout << "On Axis";
    break;
  }
}