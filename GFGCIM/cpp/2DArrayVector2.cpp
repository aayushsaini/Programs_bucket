#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &arrx) {
   
    for (int i = 0; i <= arrx.size(); ++i) {
        for (int j = 0; j < arrx[i].size(); ++j) {
            cout << arrx[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m = 25, n = 25;

    //Vector of vector: Dynamic Row sizing and allocation i.e., Dynamically Add/Remove rows
    vector<vector<int>> arr;
    for (int i = 0, ctr = 10; i < m; ++i) {
        vector<int> rows;
        for (int j = 0; j < n; ++j, ++ctr) {
            rows.push_back(ctr);
        }
        arr.push_back(rows);
    }

    print(arr);

    return 0;
}