#include <iostream>
using namespace std;

int main(){
  int n = 1e7;
  int a[n];
  a[n-1] = 7;
  cout << a[n-1] << endl;   // it shows a segmentation-fault.
                            // because of that the (locally approx size of the array declaration is 1e5);
                            // segmentation -fault is not show when we declare globally.

}
