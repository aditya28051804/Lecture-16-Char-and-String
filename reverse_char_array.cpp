#include<iostream>
 #include<string>
 #include<cstring>
using namespace std;
 

void reverse(char arr[] , int n){
     
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
 
 
 int main() {
           char arr[] = "codes";
           cout << "original string was --> " << arr << endl;
           reverse(arr, strlen(arr)); 
           cout << "The reversed string is --> "<< arr << endl; 
 return 0;   
}