#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "\n>> ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int> (n, 0));
    vector<vector<int>> res(n, vector<int> (n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int ele;
            cout << " >>> ";
            cin >> ele;
            mat[i][j] = ele;
        }
    }
    cout << "\nOrginial Matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTransposed Matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = mat[j][i];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}