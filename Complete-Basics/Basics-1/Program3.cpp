/*

Input Format
You will be given two positive integers, a and b (a <= b), separated by a
newline. Output Format For each integer in the inclusive interval : If(1 <= n <=
9), then print the English representation of it in lowercase. That is "one" for
and so on. Else if (n > 9) and it is an even number, then print "even". Else if
(n > 9) and it is an odd number, then print "odd".

Note: [a, b] = {x belongs Z | a <= x <= b} = {a, a+1, ..., b}

Sample Input
8
11

Sample Output
eight
nine
even
odd

*/
#include <iostream>
using namespace std;

int main() {
  // Write your logic here
  int n;
  cin >> n;
  if (n >= 1 && n <= 9) {
    switch (n) {
    case 1:
      cout << "one" << endl;
      break;
    case 2:
      cout << "two" << endl;
      break;
    case 3:
      cout << "three" << endl;
      break;
    case 4:
      cout << "four" << endl;
      break;
    case 5:
      cout << "five" << endl;
      break;
    case 6:
      cout << "six" << endl;
      break;
    case 7:
      cout << "seven" << endl;
      break;
    case 8:
      cout << "eight" << endl;
      break;
    case 9:
      cout << "nine" << endl;
      break;
    }
  } else {
    if (n % 2 == 0) {
      cout << "even" << endl;

    } else {
      cout << "odd" << endl;
    }
  }
}
