#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i =0; i < n; ++i){ // array index is start from 0.
    cin >> a[i];
  }
  int sum = 0;
  for(int i = 0; i < n; ++i){
    sum = sum + a[i];
  }
  cout << sum << endl;
}
