#include <bits/stdc++.h>
using namespace std;

void print(int *arr[], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m = 25, n = 25;

    //Method 2: [Static Allocation, Stack storage] 
    //Single Pointer Array
    int *arr_ptr[m];

    for (int i = 0, ctr = 100; i < m; ++i) {
        arr_ptr[i] = new int[n];
        for (int j = 0; j < n; ++j, ++ctr) {
            arr_ptr[i][j] = ctr;
        }
    }

    print(arr_ptr, m, n);
    
    return 0;
}