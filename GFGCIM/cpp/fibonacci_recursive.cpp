#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    return ((n<3 and n>0)?1:(fib(n-1)+fib(n-2)));
}

int main() {
    int a;
    cin >> a;
    cout << fib(a);
    return 0;
}