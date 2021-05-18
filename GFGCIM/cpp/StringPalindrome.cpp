#include <iostream>
using namespace std;

void checkPalindrome(string &s1) {
    for (int i = s1.length()-1, j = 0; i >= 0; --i, ++j) {
        if (s1[i] != s1[j]) {
            cout << "\nNot a Palindrome";
            return;
        }
    }
    cout << "\nPalindrome";
    return;
}

int main() {
    string s1;
    cout << "\nString : "; cin >> s1;

    checkPalindrome(s1);
    
    return 0;
}