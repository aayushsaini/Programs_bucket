#include <iostream>
using namespace std;

int checkPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int flag = false;
    while (flag != 1) {
        n++;
        flag = checkPrime(n);
    }
    cout << n << endl;
    return 0;
}