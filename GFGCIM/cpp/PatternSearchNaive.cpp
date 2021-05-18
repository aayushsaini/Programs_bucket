#include <iostream>
using namespace std;

void findPattern(string &parent, string &child) {
    int pos = parent.find(child);
    while (pos != string::npos) {
        cout << "Pattern found at: " << pos << endl;
        pos = parent.find(child, pos+1);
    }
    return;
}

int main() {
    string parent, child;
    cout << "\nParent String: "; getline(cin, parent);
    cout << "Pattern: "; cin >> child;
    cout << "\nString given: " << parent << endl;
    findPattern(parent, child);
    return 0;
}