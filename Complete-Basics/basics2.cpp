#include <iostream>
using namespace std;

int main() {
  cout << 7 / 2 << endl;   // its output is an integer.
  cout << 7 / 2.0 << endl; // its output is a float.
  /*
  There are any number which is avilable in the higher datatype then
  its calculation is in higher datatype.

  Precedence for data-types that is  =>  Double >> Float >> Long Long Int >>
  Long Int >> Int >> Characters.

  */

  cout << 'c' + 1 << endl;

  int a = 3 / 2; // its result is in the integer format.
  cout << a << endl;
  cout << 7 / 2 * 3 << endl;
  cout << 3 * 7 / 2 << endl;

  return 0;
}

