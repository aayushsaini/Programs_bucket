#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long x = 0;
    int t = 1;
    while(n>0) {
        x = x + (n%2)*t;
        n = n/2;
        t = t*10;
    }
    cout << x;
    return 0;
}