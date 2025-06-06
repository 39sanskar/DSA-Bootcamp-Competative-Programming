#include <iostream>
using namespace std;

int main() {
  // There are two jump statements => break, continue
  /*
  break => "Whenever execution reaches a break statement, it will come out of
  the last for loop." it is not effected by if or else satatement. because it is
  a jump statement.
  */
  /*
  continue => "Whenever execution reaches the continue, it will skip the
  remaining part of the loop body and move to the next iteration of the for
  loop."
  */
  for (int i = 0; i < 10; ++i) {
    if (i == 8) {
      if (true) {
        if (true) {
          break;
        }
      }
    }
    cout << i << endl;
  }
  // The above code will be print (0 to 7)

  for (int i = 0; i < 10; i++) {
    if (i == 8) {
      continue;
    }
    cout << i << endl;
  }
  /* in the continue code it will be skip the (i=8) from the output.
  this will be print  0 to 9 and skip 8.
  */
}
