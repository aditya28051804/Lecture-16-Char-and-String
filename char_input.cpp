#include<iostream>
 #include<string>
using namespace std;
 
 // input is done by cin.getline(name, max size , optional value)
 // optional value is a delimiter , it limits the value 
 
 int main() {
      char word[40];
      cin >> word;
      cout << "word you typed is "<< word<< endl;

      /*The first cin >> word; reads your input but leaves the newline
       character (\n) sitting in the input buffer.When the program reaches cin.getline(w2, 60);,
       it immediately reads that leftover newline character.The program thinks you pressed
        "Enter" without typing anything, leaves w2 empty
      , and skips to the next line.*/

      char w2[60];
      cin.getline(w2, 60);
      cout << "word you typed is "<< w2 << endl;
 return 0;   
}