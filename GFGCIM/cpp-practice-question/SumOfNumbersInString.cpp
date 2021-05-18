#include <bits/stdc++.h>
using namespace std;

bool isDigit(char c) {
    if ((((int)(c-'0')) < 10) and c != ' ') return 1;
    return 0;
}

int str2num(string &str) {
    int s = 0;
    for (int i = 0; i < str.length(); ++i) ( s = s*10 + (int)(str[i]-'0') );
    return s;
}

int findSum(string str)
{
    int sum = 0;
    //implementation: 1
    // int x = 0;
    // string num = "";
    // str += " ";
    // for (int i = 0; i < str.length(); ++i) {
    //     if (isDigit(str[i]) ) {
    //         num = num + str[i];
    //     }
    //     else if(num.length() > 0) {
    //         sum = sum + str2num(num);
    //         num = "";
    //     }
    // }

    //implementation: 2
    string num = "";
    for (char ch: str) {
        if(isDigit(ch)) num += ch;
        else {
            sum += str2num(num);
            num = "";
        }
    }
    sum += str2num(num);
    return sum;
}

int main () {
    string a = "1abc24";
    cout << findSum(a);
    return 0;
}