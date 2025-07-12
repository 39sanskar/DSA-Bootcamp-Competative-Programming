#include <iostream>
using namespace std;

int main(){
    string str; 
    cin >> str;
    string str_rev;
    for (int i = str.size() - 1; i >= 0; --i){
      str_rev = str_rev + str[i];  // str[i] it is the character adding to the string.
     /*
     basically str_rev = str_rev + str[i] this is not good practise and 
     their are certain effect on the time complexity.
     */
    }
    cout << str_rev << endl;   
}
