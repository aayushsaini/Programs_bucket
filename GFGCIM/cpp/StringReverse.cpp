#include <iostream>
using namespace std;

int main() {
    string a;
    cout << "\n>>";
    cin >> a;
    string b = "";
    for (int i = a.length()-1; i >= 0; --i) {
        b = b + a[i];
    }
    cout << "\nOrginial string: " << a;
    cout << "\nReversed String: " << b << endl;
    return 0;
}