// character array is used to store strings 
// char str[] ; 
// string array is terminated using '/0' , if not used then store garbage value 


#include<iostream>
#include<string>
using namespace std;
 
 
 
 int main() {
 char arr[] = {'a','d','i','t','y','\0' };
 char arr2[] = "Her name is Sheetal";
 char arr3[5]    = " My name is SHEELA";
         cout << arr << endl;    
         cout << arr2 << endl;
         cout << arr3 << endl;
 return 0;   
}