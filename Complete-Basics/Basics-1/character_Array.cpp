#include <iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++){// n is the no. of Row.
    for (int j = 0; j < m; ++j){ // m is the no. of Column.
         cin >> a[i][j];
    }
  }
  for (int i =0; i < n; ++i){
    for (int j = 0; j < m; ++j){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
