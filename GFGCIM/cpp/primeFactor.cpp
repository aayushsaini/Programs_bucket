#include <iostream>
using namespace std;

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            return false;
        }
    }    
    return true;
}

void getPrimeFactor(int n) {
    for (int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            int p = i;
            while (n%p == 0) {
                cout << i << " ";
                p *= i;
            }
        }
    }
}

int main() {
    int n;
    cout << "\n-> ";
    cin >> n;
    getPrimeFactor(n);
    return 0;
}
