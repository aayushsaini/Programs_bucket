#include <iostream>
#include <cmath>
using namespace std;

void distribute(int arr[], int size, int k) {
    int sizeN = pow(2, size);
    int sum[sizeN];
    int ctr = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j <= size; ++j) {
            cout << "{";
            int s = 0;
            for (int k = i; k < j; k++) {
                cout << " " << arr[k] << " ";
                s = s + arr[k];
            }
            sum[ctr] = s;
            cout << "}";
            ctr++;
        }
        cout << endl;
    }
    int diff=0;
    int e = 0;
    cout << endl << "Sums: ";
    for (int i = 0; i < ctr; i++) {
        cout << sum[i] << " "; 
    }
    for (int i = 0; i < ctr-1; i++) {
        diff = abs(sum[i] - sum[i + 1]);
        if(diff == k){
            e++;
        }
    }
    cout << "\nTotal pairs: " << e;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    distribute(arr, size, 2);
    return 0;
}