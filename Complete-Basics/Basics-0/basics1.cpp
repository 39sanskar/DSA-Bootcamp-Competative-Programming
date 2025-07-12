#include <iostream>
using namespace std;

int main() {
  int a = 6;
  a = a + 1;
  cout << a << endl;
  cout << a++ << endl;
  cout << a << endl;
  cout << ++a << endl;

  /*
   a++  => this is first use then increment
   ++a => this is first increment then use it.
   */

  char c = 'a';
  /*
   In C++ there are 128 character are exist
  */
  cout << (int)c << endl; // it will print 97 and this is its ASCII value

  // how to tkae input from the users.
  int d;
  double f;
  char e; // here input as a character.
  cin >> d >> f >> e;
  cout << d << "  " << f << " " << e << " " << (int)e;
  /*
   "
   /n"  =>  this is specially for new line
   " " => double quotes for string
   ' '  => this is specially for character.
   basically cin  ignore all the spaces and newlines.
   if i takes a character input then it takes a single input.
  */
}
