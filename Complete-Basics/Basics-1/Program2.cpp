// Sum of the Digits
/*
You are given an integer N. Write a program to calculate the sum of all digits
of N.
*/
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t; // this is specially for testcases.
  while (t--) {
    int n;
    cin >> n;
    int digit_sum = 0;
    while (n > 0) {
      int last_digit = n % 10;
      digit_sum = digit_sum + last_digit;
      n = n /
          10; // this is the integer division so it will remove the last digit.
    }
    cout << digit_sum << endl;
  }
}
