#include <iostream>
using namespace std;

void printUpTo(char endChar);

int main()
{
    char s[100];
    cout << "Enter the string to be printed: ";
    cin >> s;
    
    for (int i = 0; s[i] != '\0'; i++) {
        // Print sequences from 'a' to s[i]
        for (char c = 'a'; c <= s[i]; c++) {
            cout << c << endl;
        }
        
        // Print sequences from 'a' to the next characters including the current part
        for (int j = 0; j <= i; j++) {
            for (char c = 'a'; c <= s[i]; c++) {
                cout << s[j];
            }
            cout << endl;
        }
    }

    return 0;
}

void printUpTo(char endChar)
{
    for (char c = 'a'; c <= endChar; c++) {
        cout << c;
    }
    cout << endl;
}