#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arrx[], int m) {
   
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < arrx[i].size(); ++j) {
            cout << arrx[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int m = 3, n = 2;
    vector <int> arr[m];
 
    int ctr = 10;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j, ++ctr) {
            arr[i].push_back(ctr);
        }
    }

    print(arr, m);

    return 0;
}