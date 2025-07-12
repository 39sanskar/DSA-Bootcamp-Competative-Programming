#include <iostream>
using namespace std;

int main(){
   string str = "Hello";
   cout << str[0] << endl;
   str[0] = 'a'; // here str[0] we assing only character not string.
   cout << str << endl; // here h is replace with a 
   cout << str.size() << endl;

   // Create another Program 
   string str1 = "Sanskar Mishra";
   for (int i = 0; i < str1.size(); ++i){
     cout << str1[i] << endl;  // because of endl each character is print in the newline.
   }
}

