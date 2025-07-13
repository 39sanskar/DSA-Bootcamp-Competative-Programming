#include <iostream>
using namespace std;

const int n = 1e7; // when declare array globally then inside the int main() 
             // number is a constant variable. that is (const int n = 1e7).
int a[n];
int main(){
  a[n-1] = 7;
  cout << a[n-1] << endl;
}

// globally the limit of the array is 1e7 order 
// example 1e7, 2e7 etc...
// and the locally declaration of the array is 1e5 order.
