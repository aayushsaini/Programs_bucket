//Write a C++ program to find a number which occurs odd number of times of a given array of positive integers

#include <iostream>
using namespace std;

int oddOccurrences(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        int counter = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[i] == arr[j]) {
                counter++;
            }
        }
        if(counter%2 != 0) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << oddOccurrences(arr, size) << endl;
    return 0;
}