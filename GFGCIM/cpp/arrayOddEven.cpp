#include <iostream>
using namespace std;

void countOddEven(int *arr, int size)
{
    int odd = 0, even = 0;
    while (size) {
        (arr[--size]%2==0)?even++:odd++;
    }
    cout << "Odd:" << odd << "\tEven: " << even << endl;
    return;
}

int main() {
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; ++i) {
        arr[i] = i;
    }

    countOddEven(arr, s);
    return 0;
}