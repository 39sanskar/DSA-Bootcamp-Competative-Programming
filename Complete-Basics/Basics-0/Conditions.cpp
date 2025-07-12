/*
Conditions
Conditional Statements
Loops/ Infinite Loops
Test Cases in CP
Digit Sum & Life Universe and Everything
*/

#include <iostream>
using namespace std;

int main() {
  int a = 2;
  int b = 3;
  int c = 4;
  cout << (a == b) << endl;
  // Above code is valid code it will not throw the  compilation error .
  /*
  0 indicates => False
  1 indicates => True
  */
  cout << (a != b) << "\n";
  cout << ((b > a) && (b > c)) << "\n";
  cout << ((b > a) || (b > c)) << "\n";

  // else if Conditions
  int n;
  cin >> n;
  if (n % 2 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "N0" << endl;
  }

  // Loops
  int i = 1;
  while (i <= 10) {
    cout << i << endl;
    i++;
  }

  for (int i = 1; i <= 10; ++i) {
    cout << i << endl;
  }
  /*
  in for loops we cant use i outside of the loops
  */

  // Another way to execute for loops (Important)
  for (int i = 1; i <= 10; cout << i++ << endl) {
  }

  return 0;
}
