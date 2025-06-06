#include <climits>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  /*
  Rough Ranges for data-types

  -10^9 < int < 10^9
  -10^12 < long int < 10^12
  -10^18 < long long int < 10^18
  */

  int a = 100000;
  int b = 100000;
  int c = a * b;
  cout << c << endl;
  int mx = INT_MAX;
  cout << mx + 1 << endl;
  /*
  INt_MIN < int < INT_MAX => in  (mx+1)  it has overflow basically it creats a
  cycle  from minimum value to maximum value.

  Basically here occur overflow. => Out-of integer range.
  */

  /*
  int a = 100000;
  int b  = 100000;
  long long int c = a * b; // it will calculate as integer and it will be not
  store in the (long long int c) because both a and b is the integer. cout << c
  << endl;

  // how to resolve this.
  int a = 100000;
  int b = 100000;
  long long int c = a * 1LL * b; // 1LL  it will convert all value as a long
  long integer. cout << c << endl;

  */

  double d = 100000;
  double e = 100000;
  double f = d * e;
  cout << f << endl; // it is printed as a scientific notation.
  cout << fixed << f << endl;
  /*
  while i am using fixed-keyword then it wiil be converted as a
  scientific notation into standard numerical format.
  */
  cout << fixed << setprecision(0) << f << endl;
  /*
   Basically in the case of double it store the big value but not store in the
   accurate format. if double is not required in the calculation then must be
   not take as a use it have a precision error.
  */
  /*
  👉 setprecision is used to control the number of digits printed after the d
  cimal point when outputting floating-point numbers, typically with std::cout
  its header file is  (#include <iomanip>)
  */

  
}
