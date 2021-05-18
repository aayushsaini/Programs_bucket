#include <iostream>
using namespace std;

int main() {

    // Useful function: .size() .find() .substr() getline(cin, var) strcmp(s1,s2)
    string data, subdata;
    cout << "\nEnter the data: ";
    // cin >> data;
    getline(cin, data);
    string a = "abc";
    string b = " cdd";
    string c = a+b;
    cout << c << "fff";

    cout << "\nEnter the search term: ";
    cin >> subdata;

    int res = data.find(subdata);
    if (res == string::npos) {
        cout << "\nNot Found\n";
    } else {
        cout << "\nItem found @ " << res << endl;
    }

    //String Traversal

    for (int i = 0; i < data.length(); ++i) {
        cout << data[i]+1;
    }

    cout << endl;

    for (char x: data) {
        cout << x;
    }

    return 0;
}