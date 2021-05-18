#include <iostream>
using namespace std;

int getFirst(int n) {
    while (n > 10) {
        n = n/10;
    }
    return n;
}

int main() {
    int n;
    cout << "\n-> ";
    cin >> n;
    cout << getFirst(n);
    return 0;
}