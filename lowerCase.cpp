#include <iostream>
#include <cstring>
using namespace std;
 
void lower(char word[], int n ){
    for (int i = 0; i < n; i++) // Strictly < to protect the null terminator
    {    
        char ch = word[i];
        
        if (ch >= 'A' && ch <= 'Z')
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}
 
int main() {
    char word[100]; 
    
    cout << "Enter your full name: ";
    cin.getline(word, 100); 
    
    lower(word, strlen(word));
    cout << "Output: " << word << endl;

    return 0;   
}
