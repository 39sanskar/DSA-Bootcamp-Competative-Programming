#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int last_digit = s[s.size() - 1] - '0';  // basically s[i] it returns the index.
  cout << last_digit << endl;
  /*
  Get Last Character:
  s[s.size() - 1]
  Accesses the last character in the string.
  For "456", s[2] = '6'.

  Convert Char to Int:
- '0'
  '6' - '0' = ASCII value of '6' (54) minus ASCII of '0' (48) = 6.
  */
  
}
