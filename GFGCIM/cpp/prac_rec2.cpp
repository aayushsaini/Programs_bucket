//program to find the no. of unique path in mxn grid

#include <iostream>
using namespace std;

int grid(int m, int n) {
    if (m == 1 or n == 1) return 1;
    return (grid(m,n-1) + grid(m-1, n));
}

int main() {
    int m,n;
    cin >> m >> n;
    cout << grid(m,n);
    return 0;
}