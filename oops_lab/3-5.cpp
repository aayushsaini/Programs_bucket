//Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s in last
#include <iostream>
using namespace std;

void fix(int arr[], int size) {
    int b[size];
    int ctr = 0;
    for (int i = 0; i < size; ++i) {    //shift 0s to new array
        if (arr[i] == 0) {
            b[ctr] = arr[i];
            ctr++;
        }
    }
    for (int i = 0; i < size; ++i) {    //shift 1s to new array
        if (arr[i] == 1) {
            b[ctr] = arr[i];
            ctr++;
        }
    }
    for (int i = 0; i < size; ++i) {    //shift 2s to new array
        if (arr[i] == 2) {
            b[ctr] = arr[i];
            ctr++;
        }
    }
    //display array
    for (int i = 0; i < size; ++i) {
        cout << b[i] << " ";
    }
}

int main() {
    int arr[] = {0,0,1,1,2,0,2,2,0,1,2,0,1,0,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    fix(arr, size);
    return 0;
}