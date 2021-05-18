//Write a C++ program to move all negative elements of an array of integers to the end of the array without changing the order of positive element and negative element

#include <iostream>
using namespace std;

void swapper(int arr[], int size) {
    int b[size];
    int ctr = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] > 0) {
            b[ctr] = arr[i];
            ctr++;
        }
    } 
    for(int i = 0; i < size; ++i) {
        if(arr[i] < 0) {
            b[ctr] = arr[i];
            ctr++;
        }
    }  
    for(int i = 0; i < size; ++i) {
        cout << b[i] << " ";
    }
}

int main() {
    int arr[] = {-1,2,-3,4,1,-2,3,-4};
    int size = sizeof(arr)/sizeof(arr[0]);
    swapper(arr, size);
    return 0;
}