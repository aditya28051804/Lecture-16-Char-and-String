#include<iostream>
 #include<cstring>
using namespace std;
 
 void upper(char word[], int n ){
    for (int i = 0; i < n; i++)
    {    
        
        char ch = word[i];
        if ('a' <= ch && ch <= 'z')
        {
                word[i] = ch - 'a'+ 'A';      
              }
        
        
    }
    
 }
 
 int main() {
             char word[100] ;    //this string already has null terminator
            cin.getline(word,100);                     // at last it is hidden
             upper(word , strlen(word));
             cout << word ;

 return 0;   
}