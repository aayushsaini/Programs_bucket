#include <iostream>
using namespace std;

void display(string st, int s, int n) {
    for (int i = s; i <= n; ++i) {
        cout << st[i];
    }
    // cout << st.substr(s,n);
}

string reverseWords(string S) { 
    // code here 
    int cur = S.length()-1;
    int sz = 9;
    string n = "";
    for (int i = S.length()-1; i >= 0;--i) {
        while (S[i] != '.' and i >= 0) {
            i--;
            sz++;
        }
        if (i < 0) n += S.substr(i+1, sz);
        else n += S.substr(i+1, sz)+'.';
        sz = 0;
    }
    return n;
} 

int main() {
    string a = "Aayush.saini.loves.football";
    cout << reverseWords(a) <<endl;
    // cout << a.substr(5,5);
    return 0;
}