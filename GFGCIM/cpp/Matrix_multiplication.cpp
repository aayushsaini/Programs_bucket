#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "\n>> ";
    cin >> n;
    vector<vector<int>> mat1(n, vector<int> (n,0));
    vector<vector<int>> mat2(n, vector<int> (n, 0));
    vector<vector<int>> res(n, vector<int> (n, 0));

    cout << "Mat1:\n";
    for (int i = 0, ctr = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j, ++ctr) {
            mat1[i][j] = ctr;
            cout << ctr << " ";
        }
        cout << endl;
    }
    cout << "\nMat2:\n";
    for (int i = 0, ctr = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j, ++ctr) {
            mat2[i][j] = ctr;
            cout << ctr << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                res[i][j] = res[i][j] + (mat1[k][j]*mat2[i][k]);
            }
        }
    }

    cout << "\nMultiplied Matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}