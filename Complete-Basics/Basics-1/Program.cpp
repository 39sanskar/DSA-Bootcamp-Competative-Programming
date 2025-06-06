// Test- Life , the Universe, and Everything.
/*
 Stop processing input after reading in the number 42.
 All number at input are integers of one or two digits.
*/
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int x;
    cin >> x;
    if (x == 42) {
      break;
    }
    cout << x << endl;
  }
}
