#include <iostream>
using namespace std;
int main(){
  string str;
  cin >> str;
  bool isPalindrome = true;
  for (int i = 0; i < str.size()/ 2; ++i ){
    if (str[i] != str[str.size()-1-i]){
      /*
      Compares characters from the start and end.
      str[i] is the i-th character from the start.
      str[str.size() - 1 - i] is the corresponding character from the end.
      */
      isPalindrome = false;
      break;
    }
  }
  cout << (isPalindrome ? "isPalindrome" : "Not a Palindrome") << endl;
  /*
  This is a ternary operator.
  If isPalindrome is true, print "Palindrome"; otherwise, print "Not a Palindrome".
  */
  return 0;

}
/*
✅ Correct and Common:

i < str.size() / 2
Loops up to just before the middle index.
Best for odd and even length strings.
Avoids comparing the middle character with itself (unnecessary).

⚠️ Using:

i <= str.size() / 2
Adds one extra iteration — includes the middle character when the length is odd.
Doesn't cause incorrect output, but it's inefficient.
For even-length strings, it compares the middle two characters twice.

*/

/*
Example

Let's take str = "madam"
Length = 5 → str.size() / 2 = 2

The loop will run for:

i = 0: compare str[0] ('m') and str[4] ('m')
i = 1: compare str[1] ('a') and str[3] ('a')
We stop at i = 2, because str[2] is the middle ('d'), and comparing it with itself is redundant.
*/

/*
🔁 Summary:
Condition	Behavior
i < str.size() / 2	✅ Efficient, avoids extra compare
i <= str.size() / 2	⚠ One extra (unnecessary) check
*/
