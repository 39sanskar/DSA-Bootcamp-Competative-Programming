#include <iostream>
using namespace std;
int main(){
  string str;
  cin >> str;
  bool isPalindrome = true;
  for (int i = 0; i < str.size()/ 2; ++i ){
    if (str[i] != str[str.size()-1-i]){
      isPalindrome = false;
      break;
    }
  }
  cout << (isPalindrome ? "isPalindrome" : "Not a Palindrome") << endl;
  return 0;

}

