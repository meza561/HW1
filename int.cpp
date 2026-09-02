#include <iostream>
#include <string>

using namespace std;

int main() {
  int x;
  int y;
  int xpy,xty,xsy,xdy;
  char letterA = 'f';
  string message = "Hello World";

  cout << "Enter a value for x." << endl;
  cin >> x;
  cout << "Enter a value for y." << endl;
  cin >> y;

  xpy = x+y;
  xty = x*y;
  xsy = x-y;
  xdy = x/y;

  cout << "x = " << x << "          " << "y = " << y << endl;
  cout << "x is less than y " << (x<y) << endl;
  cout << "x + y = " << xpy << endl;
  cout << "x * y = " << xty << endl;
  cout << "x - y = " << xsy << endl;
  cout << "x / y = " << xdy << endl;

  cout << "x mod y is " << x%y << endl;
  x++;
  cout << "One number greater than x is " << x << endl;
//  int x;
//  x = 5;
//   cout << x << endl;
//   cout << letterA << endl;
//   cout << message << endl;
//
//  message = "I'm OK";
//  cout << message << endl;

  return 0;
}