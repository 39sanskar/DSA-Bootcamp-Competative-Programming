/*
Given rectangle of lengrth l and b. Print area of rectangle.

Constraints:
1 <= l <= 10^9
1 <= b <= 10^9

input format:
2 space seperated integer l and b

Output format
single number which is area of rectangle

Sample input:
3 4

Sample Output:
12

*/

#include <iostream>
using namespace std;
int main() {
  int l, b;
  cin >> l >> b;
  cout << l * 1LL * b << endl; // it convert output as a long long.
  /*
  l * b  => it goes to 10^9*10^9 => 10^18  so using long long.
  */
}
