#include <iostream>
using namespace std;

int main(){
  /*
  C++, push_back() is a function used to add an element to the end of a container like:
  std::vector
  std::string
  std::deque
  */
  string str;
  cin >> str;
  string str_rev;
  for (int i = str.size() - 1; i >= 0; --i){ // this for loop start from the end of the string.
                                             // str.size() it returns the length but str.size()-1 it return the index.
    str_rev.push_back(str[i]);
  }
  cout << str_rev << endl;
}

/*

- This loop goes **backward** from the last character to the first.
- `str[i]` accesses each character from the end.
- `str_rev.push_back(str[i])` adds each character to the end of `str_rev`.

> This is how the reverse is built character-by-character.

🔁 Example:
| `i` | `str[i]` | `str_rev` (after push_back) |
|-----|----------|-----------------------------|
| 4   | `'o'`    | `"o"`                       |
| 3   | `'l'`    | `"ol"`                      |
| 2   | `'l'`    | `"oll"`                     |
| 1   | `'e'`    | `"olle"`                    |
| 0   | `'h'`    | `"olleh"`                   |

---

#### ```cpp
  cout << str_rev << endl;

*/

/*
 How str.size() works:
str.size() returns the length of the string.
But indexing in C++ (and most programming languages) starts from 0.

string str = "hello";
int len = str.size();      // len = 5
int lastIndex = len - 1;   // lastIndex = 4


int i = str.size() - 1;
This line is initializing the loop variable i to the index of 
the last character in the string str.
*/
