#include <iostream>
using namespace std;

int main(){
   string str = "Hello";
   string str1 = "Hello";
   string result = str + str1;
   if (str == str1){
     cout << "Equal"<< endl;
   }
   else{
     cout << "Not Equal" << endl;
   }
}
