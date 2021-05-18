#include <bits/stdc++.h>
using namespace std;

void print(int **arr, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m = 25, n = 25;
    
    //Method 1: Double Pointer: [Dynamically Allocated, Heap storage] 
    //Used for creating a pointer to the array of pointers
    int **arr_ptr = new int *[n];   //Set block size for each pointer in array to N

    for (int i = 0, ctr = 100; i < m; ++i) {
        arr_ptr[i] = new int[n];
        for (int j = 0; j < n; ++j, ++ctr) {
            arr_ptr[i][j] = ctr;
        }
    }

    print(arr_ptr, m, n);

    return 0;
}