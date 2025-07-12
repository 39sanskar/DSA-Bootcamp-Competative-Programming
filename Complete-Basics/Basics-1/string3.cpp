#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin, s);
    cout << s << endl;
  }
}

/*
⚠ Common Mistake
If you use cin >> before getline(), you may run into a problem
because cin leaves a newline (\n) in the buffer.

int age;
cin >> age;          // reads number, leaves \n in buffer
getline(cin, name);  // reads leftover \n => empty string! (basically it reads a newline as a input).

✅ Fix:
Add cin.ignore() to discard the leftover newline:

int age;
cin >> age;
cin.ignore();        // discard '\n'
getline(cin, name);  // now works properly

*/

