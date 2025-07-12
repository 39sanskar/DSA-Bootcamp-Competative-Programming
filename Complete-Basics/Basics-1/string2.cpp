 #include <iostream>
 using namespace std;

 int main(){
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  cout << str1 << endl;
  cout << str2 << endl;

  /*
  getline() is a function used to read an entire line of text from an input stream (like cin) — including spaces, until a newline (\n) is encountered.

  📌 Why use getline() over cin >>?
  Method      	Reads spaces?     	Stops at   	       ExampleInput	    Output
  cin >>	       ❌ No           	First space	         John Smith	      Only John is stored
  getline()	     ✅ Yes          	Newline (\n)       	 John Smith	      Entire line stored
  

  ⚠ Common Mistake
  If you use cin >> before getline(), you may run into a problem 
  because cin leaves a newline (\n) in the buffer.

   int age;
   cin >> age;          // reads number, leaves \n in buffer
   getline(cin, name);  // reads leftover \n => empty string!
   
  ✅ Fix:
  Add cin.ignore() to discard the leftover newline: 
  int age;
  cin >> age;
  cin.ignore();        // discard '\n'
  getline(cin, name);  // now works properly
  
  */ 

}
