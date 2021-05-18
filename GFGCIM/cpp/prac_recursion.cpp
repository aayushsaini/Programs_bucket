#include <iostream>
using namespace std;

//Find non-neg number's sum upto n
int sum(int n) {
    if (n == 0) return 0;
    return (n+sum(n-1));
}

int main() {
    int a;
    cin >> a;
    cout << sum(a);
    return 0;
}