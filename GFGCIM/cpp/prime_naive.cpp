#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0 or n == 1) {
        cout << "Neither Prime nor composite";
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            cout << "Not Prime, got divided by the factor: " << i;
            return 0;
        }
    }
    cout << "Yes it's a Prime";
    return 0;
}