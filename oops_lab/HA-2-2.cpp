#include <iostream>
using namespace std;

#define MaxL 8

void rearrange_array(int array[], int size) {
    int pos[MaxL] = {};
    int neg[MaxL] = {};
    int res[MaxL] = {};
    int ctr_p = 0, ctr_n = 0;
    for (int i = 0; i < size; i++) {
        if(array[i] < 0) {
            neg[ctr_n] = array[i];
            ctr_n++;
        }
        else {
            pos[ctr_p] = array[i];
            ctr_p++;
        }
    }  
    for (int i = 0, j = 0; i < size; i=i+2, j++) {
        res[i] = neg[j];
        res[i+1] = pos[j];
    }
    for (int i = 0; i < size; i++) {
        cout << res[i] << " ";
    }
}

int main() {
    int arr[MaxL] = {-1, -2, -3, -4, 1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    rearrange_array(arr, size);
    return 0;
}