#include <iostream>
using namespace std;

int main() {
  /*
  int t;
  cin >> t; // this is specially adding for test-cases
  for (int test = 1; test <= t; test++) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        cout << "*";
      }
      cout << endl;
    }
  }
  */

  // Another way to write test cases (generally most of the time it will be uses
  // in cp.)

  int p;
  cin >> p; // here p is the test case.
  while (p--) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        cout << "*";
      }
      cout << endl;
    }
  }

  return 0;
}
